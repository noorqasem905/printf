/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 01:27:14 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/16 23:09:07 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	getlength_hexa(long num)
{
	int	i;

	i = 0;
	if (num == 0)
	{
		i++;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	ft_tohexa(unsigned long value, char type)
{
	char	*base;
	int		i;

	i = 0;
	if (type == 'X')
		base = "0123456789ABCDEF";
	else if (type == 'x')
		base = "0123456789abcdef";
	if (value >= 16)
	{
		i += ft_tohexa(value / 16, type);
		i += ft_putchar1(base[value % 16]);
	}
	else
		i += ft_putchar1(base[value]);
	return (i);
}

int	ft_print_ptr(unsigned long ptr)
{
	int	i;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = write(1, "0x", 2);
	i += ft_tohexa(ptr, 'x');
	return (i);
}
/* 
int	main(void)
{
		

	 printf("\n%x\n",ft_tohexa(7879, 'x'));
} */
