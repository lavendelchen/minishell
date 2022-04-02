/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redir_creator_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojas-e <mrojas-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:06:29 by shaas             #+#    #+#             */
/*   Updated: 2022/04/02 15:14:52 by mrojas-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	get_parser_block_num(t_parser_block *parser_blocks)
{
	int	num;

	num = 0;
	while (parser_blocks != NULL)
	{
		num++;
		parser_blocks = parser_blocks->next;
	}
	return (num);
}
