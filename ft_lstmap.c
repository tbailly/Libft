/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailly- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:40:22 by tbailly-          #+#    #+#             */
/*   Updated: 2017/11/20 10:07:36 by tbailly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newelem;

	if (!(newelem = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	newelem = f(newelem);
	if (lst->next)
		newelem->next = ft_lstmap(lst->next, f);
	return (newelem);
}
