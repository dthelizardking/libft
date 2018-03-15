/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrause- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 02:49:36 by dkrause-          #+#    #+#             */
/*   Updated: 2018/03/08 02:49:38 by dkrause-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns square root of a given number
*/

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 46340 * 46340)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
