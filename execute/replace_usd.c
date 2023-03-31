/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_usd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:01:15 by berard            #+#    #+#             */
/*   Updated: 2023/03/31 17:49:44 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * This function is used to replace environment variables (a $ followed
 * by a sequence of characters) as well as $?.
 * $home should return the affiliated environment variable, while $?
 * should be substituted with the exit status of the last foreground
 * pipeline executed.
*/
// void	replace_usd(t_token *token)
// {
// 	int	i;

// 	i = -1;
// 	while (token->arg[++i])
// 	{
// 		if (token->arg[i][0] == '$' && token->flag_env == 1)
// 		{
// 			if (token->arg[i][1] == '?')
// 				ft_memcpy(token->arg[i], ft_itoa(g_exit_code), 4); // malloc?
// 			else if (token->arg[i][1] != '\0')
// 				replace_env_usd(token, token->arg[i]);
// 		}
// 	}
// }

// void	replace_env_usd(t_token *token, char *usd)
// {
// 	while (token.env && ft_strncmp(usd, token.env->var[0],
// 			ft_strlen(token.env->var[0])) != 0)
// 			token.env = token.env->next;
// 	if (token.env != NULL)
// 		ft_memcpy(usd, token.env->var[1], strlen(token.env->var[1]) + 1); // malloc?
// 	else
// 		ft_memcpy(usd, "\0", 1); // malloc?
// }
