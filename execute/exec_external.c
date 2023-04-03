/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_external.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:41:03 by berard            #+#    #+#             */
/*   Updated: 2023/04/03 14:04:11 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * This function manages the shell's functions and, if it finds nothing,
 * indicates that the command does not exist.
*/
void	exec_external(t_token *token)
{
	char	**path;
	char	filepath[1024];
	int		i;

	i = -1;
	if (access(token->cmd, X_OK) == 0)
		execve(token->cmd, token->arg, NULL);
	path = ft_split(getenv("PATH"), ':'); // TODO - Getenv is not optimal
	if (!path)
		return (perror("Error with split during execution of an external"));
	while (path[++i])
	{
		ft_strlcpy(filepath, path[i], sizeof(filepath));
		ft_strlcat(filepath, "/", sizeof(filepath));
		ft_strlcat(filepath, token->cmd, sizeof(filepath));
		if (access(filepath, X_OK) == 0)
		{
			free_split(path);
			execve(filepath, token->arg, NULL);
		}
	}
	free_split(path);
	ft_putstr_fd(token->cmd, 2);
	ft_putstr_fd("Command not found\n", 2);
}
