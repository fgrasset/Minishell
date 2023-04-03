/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:08:12 by berard            #+#    #+#             */
/*   Updated: 2023/04/03 14:00:34 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * ECHO is a shell command that outputs text to the terminal.
 * The -n option with echo is used to prevent the output from ending
 * with a newline character, allowing you to display text on the same line.
 */
int	echo(t_token *token)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if ((ft_strcmp(token->arg[i], "-n") == 0))
	{
		flag = 1;
		i++;
	}
	while (token->arg[i])
	{
		ft_putstr_fd(token->arg[i], 1);
		if (token->arg[i + 1])
			ft_putstr_fd(" ", 1);
		i++;
	}
	if (flag == 0)
		ft_putstr_fd("\n", 1);
	return (EXIT_SUCCESS);
}
