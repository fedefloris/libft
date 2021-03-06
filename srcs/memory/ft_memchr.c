/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:19:53 by ffloris           #+#    #+#             */
/*   Updated: 2018/04/04 19:19:54 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char*)s;
	while (n--)
	{
		if (*(t_uchar*)s == (t_uchar)c)
			return ((void*)str);
		str++;
	}
	return (NULL);
}
