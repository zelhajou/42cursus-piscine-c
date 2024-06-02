/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:02:51 by zelhajou          #+#    #+#             */
/*   Updated: 2022/08/28 19:20:55 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	first;
	int	last;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}	
}
