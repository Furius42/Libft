/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdncase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhoracek <vhoracek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:04:17 by vhoracek          #+#    #+#             */
/*   Updated: 2025/03/25 21:23:31 by vhoracek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
include <stdio.h>

char	*ft_strdncase(char* str);

int main(int argc, char* argv[])
{
	if (argc != 2 )
		printf("Usage: Input a string\n");
	printf("Input : %s\n", argv[1]);
	printf("Output: %s\n", ft_strdncase(argv[1]));
	return (0);
}
*/
char	*ft_strdncase(char *str)
{
	char	*start;

	start = str;
	while (*str++)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
	}
	return (start);
}
