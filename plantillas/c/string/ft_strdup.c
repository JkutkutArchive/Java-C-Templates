/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:57:01 by jre-gonz          #+#    #+#             */
/*   Updated: 2021/12/16 20:15:22 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		l;

	l = 0;
	while (src[l])
		l++;
	cpy = malloc(l + 1);
	cpy[l] = '\0';
	while (--l >= 0)
		cpy[l] = src[l];
	return (src);
}
