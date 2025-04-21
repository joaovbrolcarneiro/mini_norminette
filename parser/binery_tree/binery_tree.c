/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binery_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-barr <hde-barr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:06:10 by hde-barr          #+#    #+#             */
/*   Updated: 2025/04/21 17:41:53 by hde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/minishell.h"
#include "minishell_part2.h"

void print_env(char **env)/////////////envar2
{
	int i;

	i = -1;
	if(!env)
	{
		ft_printf("env not setted");
		return ;
	}
	while (env[++i])
	{
		ft_printf("%s\n", env[i]);
	}
}

char *domane_expantion(char **env, char *input)//////envar2 obs valgrind
{
	/*if (ft_strncmp(ft_strtrim(input, " "),"env", ft_strlen(input) + 3) == 0)//valgrind
		print_env(env);*///valgrind
	if(get_envar(env, input) /*&& *input == '$'*/)
		return (get_envar(env, input));
	return ("");
}

