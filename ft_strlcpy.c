/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:47:52 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/20 20:03:46 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*p_dst;
	size_t	srclen;

	if (!dst || !src || !dstsize)
		return (0);
	p_dst = dst;
	srclen = ft_strlen(src);
	if (!dst || !src || !dstsize)
		return (0);
	while ((dstsize-- - 1) && *src)
		*(p_dst++) = *(src++);
	*p_dst = '\0';
	return (srclen);
}
