/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 12:48:24 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/04 12:48:25 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_tab(char **arg)
{
	int	i;

	i = 0;
	if (!arg)
		return ;
	while (arg[i])
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}