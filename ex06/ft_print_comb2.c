/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:53:59 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/17 14:53:44 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_print_comb2(void);

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putchar((number1 / 10) + '0');
			ft_putchar((number1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((number2 / 10) + '0');
			ft_putchar((number2 % 10) + '0');
			if (!(number1 == 98 && number2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			number2++;
		}
		number1++;
	}
}
