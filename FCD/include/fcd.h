/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcd.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:40:55 by ffons-ti          #+#    #+#             */
/*   Updated: 2023/09/04 13:25:39 by ffons-ti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FCD_H
# define FCD_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/wait.h>
# include "libft.h"
# include <readline/readline.h>
# include <readline/history.h>

char	*fcd(char *str, int len);
#endif