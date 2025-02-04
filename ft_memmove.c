/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhoracek <vhoracek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:23:58 by vhoracek          #+#    #+#             */
/*   Updated: 2024/12/15 18:23:58 by vhoracek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	int				c;
	unsigned char	*temp;

	c = 0;
	temp = (unsigned char *)malloc(n * sizeof(char));
	if (!temp)
		return (0);
	i = 0;
	while (i < n)
	{
		temp[i] = ((const unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
