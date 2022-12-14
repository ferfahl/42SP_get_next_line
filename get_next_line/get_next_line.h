/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:07:14 by feralves          #+#    #+#             */
/*   Updated: 2022/08/06 00:17:54 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//Libraries
//to use malloc & free
# include <stdlib.h>
//to use read
# include <unistd.h>

//define BUFFER_SIZE
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

//Functions

char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, char *s2);
void	ft_strlcpy_mod(char *dest, const char *src, char a, size_t index);
size_t	ft_strlen_mod(const char *src, char a, size_t count);
char	*get_next_line(int fd);
char	*ft_read(int fd);
char	*ft_return_line(int fd);
char	*ft_split_line(char *aux_temp, char **overrun);

#endif