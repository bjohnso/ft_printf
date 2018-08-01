/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:11:01 by bjohnso           #+#    #+#             */
/*   Updated: 2018/08/01 12:11:51 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Replaces conversion with string (one param)
*/

int			pf_transform(t_pf_param param, va_list list)
{
	static t_pf_handle	(handle[12]) = {
		{ .conversion = 's', .handle = pf_handle_string },
		{ .conversion = 'S', .handle = pf_handle_string },
		{ .conversion = 'c', .handle = pf_handle_char },
		{ .conversion = 'C', .handle = pf_handle_char },
		{ .conversion = '%', .handle = pf_handle_percent },
		{ .conversion = 'd', .handle = pf_handle_hex },
		{ .conversion = 'x', .handle = pf_handle_hex },
		{ .conversion = 'X', .handle = pf_handle_hex },
		{ .conversion = 'p', .handle = pf_handle_hex },
		{ .conversion = 'u', .handle = pf_handle_hex },
		{ .conversion = 'U', .handle = pf_handle_hex },
		{ .conversion = 'o', .handle = pf_handle_hex }
	};
	int					i;

	if (param.error)
		return (0);
	i = -1;
	while (++i < 12)
		if (param.conversion == handle[i].conversion)
			return (handle[i].handle(param, list));
	return (0);
}
