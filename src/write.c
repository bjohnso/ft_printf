/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:11:56 by bjohnso           #+#    #+#             */
/*   Updated: 2018/08/01 12:12:33 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** TODO: Change this to use a buffer system
*/

int			pf_write(const char *str, const size_t len)
{
	write(1, str, len);
	return (len);
}

int			pf_repeat(const char c, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		pf_write(&c, 1);
		i++;
	}
	return (i);
}
