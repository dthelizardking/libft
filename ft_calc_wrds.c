/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_wrds.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrause- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 03:03:45 by dkrause-          #+#    #+#             */
/*   Updated: 2018/03/08 03:03:47 by dkrause-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** counts # of words in a given string of text
*/

int	ft_calc_wrds(char const *s, char c)
{
	int i;

	i = 0;
	if (*s && *s != c)
		i++;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			i++;
		s++;
	}
	return (i);
}
