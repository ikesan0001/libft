/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:39:01 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/30 17:32:14 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n *= -1;
	}
	printf("\n%ld\n", long_n);
	if (n >= 10)
		ft_putnbr_fd(long_n / 10, fd);
	long_n %= 10;
	ft_putchar_fd(long_n + '0', fd);
	printf("%c", (char)(long_n + '0'));
	return ;
}
