/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_pwd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojas-e <mrojas-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:51:12 by mrojas-e          #+#    #+#             */
/*   Updated: 2022/04/19 22:11:48 by mrojas-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

bool	cmd_pwd(t_exec_block *cmd_pwd)
{
	char	*cwd;

	if (cmd_pwd->arg !=  NULL)
		return (handle_error(
			"Mi[shell]in: pwd: toooo much too handle\n",
			EXIT_STD_ERROR));
	cwd = getcwd(NULL, 0);
	if (cwd == NULL)
	{
		perror("Error: pwd");
		g_exit_status = 2;
		return (true);
	}
	else
	{
		ft_putstr_fd(cwd, STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		g_exit_status = 0;
	}
	free(cwd);
	return (false);
}
