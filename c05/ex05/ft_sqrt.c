/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalcao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:59:30 by bfalcao-          #+#    #+#             */
/*   Updated: 2020/11/05 21:52:45 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long i;

	i = 0;
	if (nb == 0)
		return (nb);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
