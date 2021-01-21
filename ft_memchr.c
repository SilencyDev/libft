/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:09:33 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/21 12:54:18 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;

	ptr = (char *)s;
	while (n--)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}