/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 00:59:36 by nqasem            #+#    #+#             */
/*   Updated: 2024/09/16 21:37:17 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

void	ft_printchar(char c);
int		ft_putnbr(long nb);
int		ft_putchar1(char c);
int		ft_putstr(char *str);
int		getlength(long long num);
int		ft_print_ptr(unsigned long ptr);
int		ft_putunbr(unsigned int nb);
int		ft_tohexa(unsigned long nb, char type);
int		getlength_hexa(long num);
int		nq_conversion(char a, va_list args);
int		ft_printf(const char *num, ...);

#endif
