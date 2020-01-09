/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbahrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:46:28 by kbahrar           #+#    #+#             */
/*   Updated: 2019/04/13 20:22:41 by kbahrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
