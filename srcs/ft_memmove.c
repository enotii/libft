/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caking <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 21:51:56 by caking            #+#    #+#             */
/*   Updated: 2018/12/08 00:57:15 by caking           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*serc;

	serc = src;
	dest = dst;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	serc += len;
	dest += len;
	while (len--)
		*--dest = *--serc;
	return (dst);
}
