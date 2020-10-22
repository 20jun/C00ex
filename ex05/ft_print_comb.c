/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:35:54 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/22 22:50:46 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char arr[6];
	arr[6] = "hello";

	char a = '0';
	char b = '1';
	char c = '2';
	char d = ',';
	char e = ' ';
	
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(e);

				c++;
			}
		}
	}
	ft_putchar(a[0]);
}
