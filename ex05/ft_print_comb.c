/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:24:51 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/18 17:01:44 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_comb(char first, char second, char third);

void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char first, char second, char third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if (!(first == '7' && second == '8' && third == '9' ))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	while (number[0] <= '7')
	{
		while (number[1] <= '8')
		{
			while (number[2] <= '9')
			{
				ft_write_comb(number[0], number[1], number[2]);
				number[2]++;
			}
			number[1]++;
			number[2] = number[1] + 1;
		}
		number[0]++;
		number[1] = number[0] + 1;
		number[2] = number[0] + 2;
	}
}
