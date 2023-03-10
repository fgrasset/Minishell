/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:37:06 by berard            #+#    #+#             */
/*   Updated: 2023/03/10 11:27:06 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <readline/readline.h>
# include <readline/history.h>
# include <stdio.h>
# include <stdlib.h>

int main() {
	char	*input;
	// printf("Enter a line of text:\n");
	// input = readline("Minishell > ");
	// printf("you entered: %s\n", input);
	while (1)
	{
		input = readline("Minishell > ");
		printf("This is the input: %s\n", input);
		add_history(input);
	}
	free(input);
	return(0);
}
