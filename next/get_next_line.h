/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:02:30 by tubaaydogan       #+#    #+#             */
/*   Updated: 2022/12/09 16:23:00 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LİNE_H
# define GET_NEXT_LİNE_H

#ifndef BUFFER_SİZE
# define BUFFER_SİZE [3]
#endif

#include "stdlib.h"
#include "fcntl.h"
#include "unistd.h"

char	 *get_next_line(int fd);

char 	*ft_read(int fd, char *buffer);

char 	*ft_str(char *buffer);

int		ft_check(char *str);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_substr(const char *s, unsigned int start, size_t len);

size_t	ft_strlen(const char *s);

void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_strdup(const char *s1);

#endif