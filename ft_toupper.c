/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrause- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 22:55:33 by dkrause-          #+#    #+#             */
/*   Updated: 2018/03/02 22:55:36 by dkrause-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** converts a given letter to uppercase
*/

int		ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - 32;
	return (c);
}
