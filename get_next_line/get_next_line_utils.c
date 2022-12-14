/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:33:14 by feralves          #+#    #+#             */
/*   Updated: 2022/08/06 00:38:05 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *src)
{
	char	*duplicate;
	int		count;

	count = 0;
	duplicate = malloc(ft_strlen_mod(src, '\0', 0) * sizeof(*duplicate) + 1);
	if (!duplicate)
		return (NULL);
	while (*src)
		duplicate[count++] = *src++;
	duplicate[count] = '\0';
	return (duplicate);
}

size_t	ft_strlen_mod(const char *src, char a, size_t count)
{
	size_t	size;

	size = 0;
	while (src && src[count] != a && src[count] != '\0')
	{
		count++;
		size++;
	}
	return (size);
}

void	ft_strlcpy_mod(char *dest, const char *src, char a, size_t index)
{
	size_t	count;

	count = 0;
	while (src && src[index] != a && src[index] != '\0')
	{
		dest[count] = src[index];
		count++;
		index++;
	}
	dest[count] = 0;
}

char	*ft_strchr(const char *src, int c)
{
	char	*str;

	str = (char *)src;
	if ((char)c == '\0')
		return (&str[ft_strlen_mod(str, '\0', 0)]);
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	ssize_t	len_total;
	ssize_t	len_s1;
	ssize_t	len_s2;

	len_s1 = -1;
	len_s2 = 0;
	if (!s1)
	{
		new_str = malloc(ft_strlen_mod(s2, '\0', 0) + 1);
		if (!new_str)
			return (NULL);
		ft_strlcpy_mod(new_str, s2, '\0', len_s2);
		return (new_str);
	}
	len_total = (ft_strlen_mod(s1, '\0', 0) + ft_strlen_mod(s2, '\0', 0)) + 1;
	new_str = malloc (len_total);
	if (!new_str)
		return (NULL);
	while (s1 && s1[++len_s1])
		new_str[len_s1] = s1[len_s1];
	while (s2 && s2[len_s2])
		new_str[len_s1++] = s2[len_s2++];
	new_str[len_s1] = '\0';
	return (new_str);
}
