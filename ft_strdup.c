/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladyslb <vladyslb@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 12:13:39 by vladyslb          #+#    #+#             */
/*   Updated: 2026/09/03 12:13:39 by vladyslb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*c;

	len = ft_strlen(s);
	c = malloc(len + 1);
	if (!c)
		return (NULL);
	ft_memcpy(c, s, len);
	c[len] = '\0';
	return (c);
}
