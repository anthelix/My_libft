/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:35:44 by schatagn          #+#    #+#             */
/*   Updated: 2018/12/03 08:53:37 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fraiche;
	size_t	i;
	char	*p_s;

	i = 0;
	p_s = (char*)s;
	fraiche = NULL;
	if ((s) && (fraiche = (ft_strnew(len))))
	{
		while (len > 0)
		{
			fraiche[i] = p_s[start];
			i++;
			start++;
			len--;
		}
	}
	return (fraiche);
}
