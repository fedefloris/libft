/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 10:33:48 by ffloris           #+#    #+#             */
/*   Updated: 2018/04/25 13:52:44 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int				ft_printf_fd(int fd, const char *s, ...)
{
	t_printf	tp;
	va_list		params;
	int			result;

	if (!s)
		return (-1);
	va_start(params, s);
	tp = ft_setup_printf(s, fd, &params);
	result = ft_printf_parse(&tp);
	va_end(params);
	return (result);
}
