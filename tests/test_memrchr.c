/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:39:29 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/13 01:36:33 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int		n;
	void	*s;
	int		c;
	void	*result;

	if (argc < 2)
	{
		ft_putstrnl("Input missing, stopping execution.");
		return (-1);
	}
	ft_putstrnl("Starting tests for memrchr.");
	n = ft_atoi(argv[1]);
	s = ft_memalloc(n);
	c = 'Z';
	ft_putstr("Finding character ");
	ft_putcharnl(c);
	ft_alphabetize(s, n);
	ft_putstr("Characters in buffer:\t");
	ft_putmemnl(s, n);
	result = ft_memrchr(s, c, n);
	if (result != NULL)
	{
		ft_putstr("Character found through memrchr: ");
		ft_putmemnl(result - 13, 27);
	}
	else
		ft_putstrnl("Function returned NULL: character not found in n chars.");
	ft_memdel(&s);
	ft_putstrnl("End of tests.");
}