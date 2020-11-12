/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalcao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:36:30 by bfalcao-          #+#    #+#             */
/*   Updated: 2020/10/27 12:21:29 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	conditions(char x, char y, char z)
{
	if (x != y && y != z && z != x)
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
	}
	if (x == 55 && y == 56 && z == 57)
		;
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = 48;
	while (x <= 55)
	{
		y = x + 1;
		while (y <= 56)
		{
			z = y + 1;
			while (z <= 57)
			{
				conditions(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
