/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:50:28 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/03 18:52:32 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	 main(int argc, char **argv)
{
	char c;

	if (argc != 2)
		return (-1);

	c = argv[1][0];
	if (ft_isascii(c) == 1)
		printf("Input %c ASCII value:\tTRUE", c);
	if (ft_isascii(c) == 0)
		printf("Input %c ASCII value\tFALSE", c);
	return (0);
}