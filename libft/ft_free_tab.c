/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:57:53 by lfabbro           #+#    #+#             */
/*   Updated: 2016/11/22 12:32:28 by lfabbro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_free_tab(char **tab)
{
	int		i;

	i = -1;
	if (tab != NULL)
	{
		while (tab[++i] != NULL)
		{
			free(tab[i]);
		}
		free(tab[i]);
		free(tab);
	}
}
