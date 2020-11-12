/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalcao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:02:56 by bfalcao-          #+#    #+#             */
/*   Updated: 2020/10/27 11:58:14 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((char)(a / 10) + '0');
			ft_putchar((char)(a % 10) + '0');
			write(1, " ", 1);
			ft_putchar((char)(b / 10) + '0');
			ft_putchar((char)(b % 10) + '0');
			if (a == 98 && b == 99)
				;
			else
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
