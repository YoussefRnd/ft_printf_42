/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:02:40 by yboumlak          #+#    #+#             */
/*   Updated: 2023/12/27 18:07:12 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int n, int *)
{
	char	c;
	long	new_n;

	new_n = n;
	if (new_n < 0)
	{
		write(fd, "-", 1);
		new_n = -new_n;
	}
	if (new_n >= 10)
	{
		ft_putnbr(new_n / 10, fd);
	}
	c = (new_n % 10) + '0';
	write(fd, &c, 1);
}
