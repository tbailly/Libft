/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailly- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:30:59 by tbailly-          #+#    #+#             */
/*   Updated: 2017/11/18 16:39:24 by tbailly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_nblength(int n)
{
	unsigned	int	count;

	count = 0;
	if (n == -2147483648)
		count = 10;
	else if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n / 10 != 0 && n != -2147483648)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char	*ret;
	size_t	nlen;

	nlen = ft_nblength(n);
	if (!(ret = (char*)malloc(sizeof(*ret) * (nlen + 2))))
		return (NULL);
	ft_memset(ret, 'A', nlen + 1);
	ret[nlen + 1] = '\0';
	if (n == -2147483648)
		ret = ft_strcpy(ret, "-2147483648\0");
	else if (n < 0)
	{
		ret[0] = '-';
		n = -n;
	}
	else if (n == 0)
		ret[0] = '0';
	while (n != 0 && n != -2147483648)
	{
		ret[nlen] = (n % 10) + 48;
		n /= 10;
		nlen--;
	}
	return (ret);
}
