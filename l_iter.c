/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_iter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sladonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/26 15:47:17 by sladonia          #+#    #+#             */
/*   Updated: 2017/02/26 15:47:19 by sladonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	l_iter(t_lst *head, void (*f)(t_lst *elem))
{
	t_lst *tmp;

	tmp = head;
	while (tmp)
	{
		(*f)(tmp);
		tmp = tmp->next;
	}
}
