/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalcao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:42:00 by bfalcao-          #+#    #+#             */
/*   Updated: 2020/11/03 12:20:03 by bfalcao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *start;

	start = dest;
	while (*start != '\0')
		start++;
	while (*src != '\0' && nb > 0)
	{
		*start = *(unsigned char *)src;
		start++;
		src++;
		nb--;
	}
	*start = '\0';
	return (dest);
}
