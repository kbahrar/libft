/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbahrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:47:05 by kbahrar           #+#    #+#             */
/*   Updated: 2019/04/20 18:07:20 by kbahrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_fin(char const *s, size_t i)
{
	size_t temp;

	temp = i;
	while (s[temp] == ' ' || s[temp] == '\n' || s[temp] == '\t')
		temp++;
	if (s[temp] == '\0')
		i = temp;
	return (i);
}

static int	size_word(char const *s)
{
	int i;
	int temp;
	int j;

	i = 0;
	temp = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i++])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			j = 0;
			while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			{
				i++;
				j++;
			}
			if (s[i] != '\0')
				temp += j;
		}
		temp++;
	}
	return (temp);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	char	*str;
	size_t	j;

	if (s == NULL)
		return (0);
	str = (char*)ft_memalloc(size_word(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		i = is_fin(s, i);
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
