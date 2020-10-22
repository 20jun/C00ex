/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 22:51:56 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/22 23:26:28 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aaa(void)
{
	char	arr[5];
	
	arr[0] = '0';
	arr[1] = '1';
	arr[2] = '2';
	arr[3] = ',';
	arr[4] = ' ';

	while (arr[0] <= '7')
	{
		while (arr[1] <= '8')
		{
			while (arr[2] <= '9')
			{
				ft_putchar(arr[0]);
				ft_putchar(arr[1]);
				ft_putchar(arr[2]);

				if (arr[0] != '7')
				{
				ft_putchar(arr[3]);
				ft_putchar(arr[4]);
				}

				arr[2]++;
			}
			arr[1]++;
			arr[2] = arr[1] + 1;
		}

		arr[0]++;
		arr[1] = arr[0] + 1;
		arr[2] = arr[0] + 2;
	}
}

int		main(void)
{
	aaa();
}
