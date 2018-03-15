/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_overlap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrause- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 03:05:24 by dkrause-          #+#    #+#             */
/*   Updated: 2018/03/08 03:05:26 by dkrause-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** checks for pointer overlap
*/

size_t	ft_ptr_overlap(void *dst, const void *src, size_t len)
{
	size_t i;

	i = -1;
	while (i++ <= len)
		if ((src + i == dst || (src + i == dst + len)))
			return (1);
	return (0);
}
