/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailly- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:21:11 by tbailly-          #+#    #+#             */
/*   Updated: 2017/11/20 11:11:53 by tbailly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrepchr(const char *s, char c1, char c2)
{
	int		i;
	char	*ret;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(ret = (char*)malloc(sizeof(*ret) * (ft_strlen(s) + 1))))
		return (NULL);
	if (c1 == '\0' || c2 == '\0')
		return ((char*)s);
	while (s[i] != '\0')
	{
		if (s[i] == c1)
			ret[i] = c2;
		else
			ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
