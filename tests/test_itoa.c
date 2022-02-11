/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 04:39:38 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/11 13:53:05 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <string.h>

int	main(void)
{
	assert(ft_strequ(ft_itoa(INT_MAX), "2147483647"));
	assert(ft_strequ(ft_itoa(INT_MIN), "-2147483648"));
	return (0);
}
