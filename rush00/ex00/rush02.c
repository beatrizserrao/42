/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:30:30 by jsantos           #+#    #+#             */
/*   Updated: 2020/10/24 20:46:02 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	conditions(int x, int y, int ix, int iy)
{
	if (iy == 1 && (ix == 1 || ix == x))
	{
		ft_putchar('A');
	}
	else if (iy == y && (ix == 1 || ix == x))
	{
		ft_putchar('C');
	}
	else if (iy == 1 || iy == y || ix == 1 || ix == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

int		rush(int x, int y)
{
	int ix;
	int iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			conditions(x, y, ix, iy);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
	return (0);
}
