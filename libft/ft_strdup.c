/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:23:32 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:21:52 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	int		n;
	int		i;

	i = -1;
	n = ft_strlen(str) + 1;
	if ((s = ft_calloc(n, 1)) != NULL)
	{
		while (++i < n)
			s[i] = str[i];
		s[i] = '\0';
	}
	return (s);
}
