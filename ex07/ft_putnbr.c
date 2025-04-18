/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 09:35:26 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/18 16:48:45 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);
			ft_putchar((nbr % 10) + '0');
		}
		else
		{
			ft_putchar(nbr + '0');
		}
	}
}
