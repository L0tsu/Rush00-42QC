/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <onilotsu@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:09:01 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/16 14:03:46 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x)
{
	int	nb;

	nb = 1;
	while (nb <= x)
	{
		if (nb != 1 && nb < x)
			ft_putchar('B');
		else if (nb == 1)
			ft_putchar('A');
		if (x > 1 && nb == x)
			ft_putchar('C');
		nb++;
	}
	ft_putchar('\n');
}

void	vlines(int x, int y)
{
	int	nb;

	while (y > 2)
	{
		nb = 1;
		y--;
		while (nb <= x)
		{
			if (nb == x || nb == 1)
				ft_putchar('B');
			else if (nb < x && nb != 1)
				ft_putchar(' ');
			nb++;
		}
		ft_putchar('\n');
	}
	if (y == 2)
		firstline(x);
}

void	rush03(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	else
	{
		firstline(x);
	}
	if (y >= 2)
		vlines(x, y);
}
