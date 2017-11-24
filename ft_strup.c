/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailly- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:08:05 by tbailly-          #+#    #+#             */
/*   Updated: 2017/11/20 11:10:35 by tbailly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strup(char *s)
{
	char			*ret;
	unsigned	int	i;

	if (s == NULL)
		return (NULL);
	if (!(ret = (char*)malloc(sizeof(*ret) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ret[i] = ft_toupper(s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
