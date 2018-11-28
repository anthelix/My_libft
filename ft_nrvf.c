/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nrvf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:40:34 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/26 15:15:10 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nrvf(int c)
{
	return ((c == '\n' || c == '\t' || c == '\r' || c == '\v') ? 1 : 0);
}