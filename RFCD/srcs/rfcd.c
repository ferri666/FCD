/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rfcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:02:09 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/05 11:01:26 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rfcd.h"

int	n_lt(char *str, int len)
{
	int		i;
	int		n;
	char	c;

	i = 0;
	n = 0;
	while (i < len)
	{
		c = str[i];
		if (c <= '0' || c > '9')
			return (-1);
		n += c - '0';
		i += 2;
	}
	return (n);
}

char	*rfcd(char *str, int len)
{
	int		i;
	int		j;
	int		n;
	char	cha;
	char	*ret;

	i = 0;
	j = 0;
	if (len % 2 != 0 || n_lt(str, len) <= 0)
		return (NULL);
	ret = (char *) malloc (sizeof(char) * n_lt(str, len) + 1);
	if (!ret)
		return (NULL);
	while (i < len)
	{
		n = str[i++] - '0';
		cha = str[i++];
		while (n > 0)
		{
			ret[j++] = cha;
			n--;
		}
	}
	ret[j] = '\0';
	return (ret);
}
