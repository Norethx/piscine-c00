/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:01:26 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/18 12:03:41 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_put_comb(int nbr_ls[], int index);

void	ft_comb_nbr(int nbrP_ls[], int max, int index, int n);

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_comb(int nbr_ls[], int index)
{
	int	i;

	i = 0;
	while (i <= index)
	{
		ft_putchar(nbr_ls[i] + '0');
		i++;
	}
	if (!(nbr_ls[0] == 10 - (index + 1)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comb_nbr(int nbr_ls[], int max, int index, int n)
{
	if (index < n)
	{
		if (index > 0)
		{
			nbr_ls[index] = nbr_ls[index - 1] + 1;
		}
		while (nbr_ls[index] <= max)
		{
			if (index == n - 1)
			{
				ft_put_comb(nbr_ls, index);
				nbr_ls[index]++;
			}
			else
			{
				ft_comb_nbr(nbr_ls, max + 1, index + 1, n);
				nbr_ls[index]++;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int	max;
	int	nbr_ls[10];
	int	index;

	if (n >= 10 || n <= 0)
	{
		write(1, "invalid entry. try again.\n", 26);
	}
	else
	{
		max = 10 - n;
		index = 0;
		nbr_ls[index] = 0;
		ft_comb_nbr(nbr_ls, max, index, n);
	}
}
