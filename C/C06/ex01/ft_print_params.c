/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:03:20 by zelhajou          #+#    #+#             */
/*   Updated: 2022/09/05 18:06:25 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	if (argc > 1)
	{
		while (c < argc)
		{
			while (argv[c][i])
			{
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			c++;
		}
	}
	return (0);
}
