/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:06:45 by anazri            #+#    #+#             */
/*   Updated: 2019/01/20 16:11:05 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_bottom(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('\\');
		else if (i == (x - 1))
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
}

void		ft_middle(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('*');
		else if (i == (x - 1))
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
}

void		ft_start(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('/');
		else if (i == (x - 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void		rush(int x, int y)
{
	int counter;
	int n;

	n = '\n';
	counter = 0;
	if (x != 0 && y != 0)
	{
		while (counter <= (y - 1))
		{
			if (counter == 0)
				ft_start(x);
			else if (counter == (y - 1))
				ft_bottom(x);
			else
				ft_middle(x);
			ft_putchar(n);
			counter++;
		}
	}
}
