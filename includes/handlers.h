/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 11:58:56 by bjohnso           #+#    #+#             */
/*   Updated: 2018/08/01 11:59:31 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H
# include "ft_printf.h"

int			handle_access(t_pf_param *param, const char *str, size_t *i);
int			handle_flags(t_pf_param *param, const char *str, size_t *i);
int			handle_width(t_pf_param *param, const char *str, size_t *i);
int			handle_precision(t_pf_param *p, const char *str, size_t *i);
int			handle_modifier(t_pf_param *p, const char *str, size_t *i);
int			handle_conversion(t_pf_param *p, const char *str, size_t *i);
t_pf_param	get_param(const char *str, size_t len);

#endif
