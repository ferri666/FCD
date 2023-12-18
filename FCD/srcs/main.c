/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:54:52 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/04 13:42:02 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcd.h"

int	main(int argc, char **argv)
{
	int		i;
	int		f;
	char	*str;

	if (argc == 2)
	{
		printf("%s\n", fcd(argv[1], ft_strlen(argv[1])));
		return (0);
	}
	if (argc == 3)
	{
		i = 0;
		f = ft_atoi(argv[2]);
		str = fcd(argv[1], ft_strlen(argv[1]));
		while (i < f)
		{
			printf ("%s\n", str);
			str = fcd(str, ft_strlen(str));
			i++;
		}
	}
}
