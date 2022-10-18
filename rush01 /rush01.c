/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:45:58 by khbouych          #+#    #+#             */
/*   Updated: 2022/08/28 18:43:26 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print(int x, char first_char, char middel_char, char last_char)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
		{
			ft_putchar(first_char);
		}
		else if (column == x)
		{
			ft_putchar(last_char);
		}
		else
		{
			ft_putchar(middel_char);
		}
		column++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	linge;

	linge = 1;
	if (x >= 1 && y >= 1)
	{
		while (linge <= y)
		{
			if (linge == 1)
			{
				ft_print(x, '/', '*', '\\');
			}
			else if (linge == y)
			{
				ft_print(x, '\\', '*', '/');
			}
			else
			{
				ft_print(x, '*', ' ', '*');
			}
			linge++;
		}
	}
}
