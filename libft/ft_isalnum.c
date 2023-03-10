/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:27:14 by fgrasset          #+#    #+#             */
/*   Updated: 2023/03/10 14:39:46 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
Checks whether a given character is alphanumeric, i.e.,
whether it is either an uppercase or lowercase letter or a digit.
@param c The character to be checked.
@return 1 if the character is alphanumeric, 0 otherwise.
The function has no side effects.
*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') \
	|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
