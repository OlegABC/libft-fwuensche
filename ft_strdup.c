/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:08:15 by fwuensch          #+#    #+#             */
/*   Updated: 2018/11/25 20:03:43 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	size_t	mem_space;
	char	*s2;

	mem_space = ft_strlen(s1) + 1;
	s2 = malloc(mem_space);
	if (s2 == NULL)
		return (NULL);
	return (char *)ft_memcpy(s2, s1, mem_space);
}
