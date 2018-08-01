/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:01:43 by bjohnso           #+#    #+#             */
/*   Updated: 2018/08/01 12:02:34 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "helpers.h"

inline extern int			pf_is_conversion(const char c)
{
	return (pf_strchr("dDioOuUxXeEfFgGaAcCsSpn%", c) != NULL);
}

inline extern int			pf_is_modifier(const char c)
{
	return (pf_strchr("hljz", c) != NULL);
}

inline extern int			pf_is_flag(const char c)
{
	return (pf_strchr("#0-+' ", c) != NULL);
}

inline extern int			pf_is_precision(const char c)
{
	return (pf_strchr("$*.", c) != NULL);
}

inline int					pf_is_valid(const char c)
{
	return (pf_is_conversion(c) || pf_is_modifier(c) || pf_is_flag(c) ||
			pf_isdigit(c) || pf_is_precision(c));
}
