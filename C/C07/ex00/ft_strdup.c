/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:13:49 by zelhajou          #+#    #+#             */
/*   Updated: 2022/09/10 19:49:27 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*strcpy;

	i = 0;
	strcpy = malloc(ft_strlen(src) + 1);
	if (strcpy == NULL)
		return (NULL);
	while (src[i])
	{
		strcpy[i] = src[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
