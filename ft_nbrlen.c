/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrause- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 01:54:32 by dkrause-          #+#    #+#             */
/*   Updated: 2018/03/08 01:54:33 by dkrause-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** finds lenght of a number
*/

int		ft_nbrlen(int nb)
{
	int i;

	i = 2;
	while (nb /= 10)
		i++;
	return (i);
}
