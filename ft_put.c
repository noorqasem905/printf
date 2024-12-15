/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:12:46 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/16 21:35:35 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

int	getlength(long long num)
{
	int	i;

	i = 0;
	if (num <= 0)
	{
		i++;
		num *= -1;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else
	{
		return (ft_putstr("(null)"));
	}
	return (i);
}

int	ft_putnbr(long nb)
{
	int	neg;

	neg = 0;
	if (nb < 0)
	{
		ft_printchar('-');
		nb *= -1;
		neg++;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_printchar((nb % 10) + 48);
	}
	else
		ft_printchar(nb + 48);
	return (neg + getlength(nb));
}

int	ft_putunbr(unsigned int nb)
{	
	if (nb >= 10)
	{
		ft_putunbr(nb / 10);
		ft_printchar((nb % 10) + '0');
	}
	else
		ft_printchar(nb + 48);
	return (getlength(nb));
}
/* 
int	main(void){
  printf("%d",printf("\n%d",0));
} */
