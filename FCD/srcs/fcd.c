/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:02:09 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/05 10:33:39 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcd.h"

int	n_gr(char *str, int len)
{
	int		i;
	int		n;
	char	cha;

	cha = str[0];
	i = 1;
	n = 1;
	while (i < len)
	{
		if (cha != str[i])
		{
			cha = str[i];
			n++;
		}
		i++;
	}
	return (n);
}

char	*fcd(char *str, int len)
{
	int		i;
	int		j;
	int		n;
	char	cha;
	char	*ret;

	i = 1;
	n = 1;
	j = 0;
	cha = str[0];
	ret = (char *) malloc (sizeof(char) * n_gr(str, len) * 2 + 1);
	while (1)
	{
		while (cha == str[i] && str[i] != '\0')
		{
			n++;
			i++;
		}
		if (n > 9)
			n = 9;
		ret[j++] = n + '0';
		ret[j++] = cha;
		cha = str[i];
		n = 1;
		i++;
		if (i > len)
			break ;
	}
	ret[j] = '\0';
	return (ret);
}
