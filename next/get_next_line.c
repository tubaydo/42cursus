/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:41:49 by tubaaydogan       #+#    #+#             */
/*   Updated: 2022/12/06 18:32:44 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdlib.h"
#include "fcntl.h"


char *get_next_line(int fd)
{
	char buffer[50];
	char *line;
	
	if (fd < 0 || read(fd, &line, 0) < 0)
		return (0);
	line = ft_read_and_storage(fd,buffer);


	return (line);
}

char *ft_read_and_storage(int fd, char *buffer)
{
	char *b;
	int i;

	i = read (fd,buffer,BUFFER_SİZE);
	if (i == -1)
		return (NULL);
	else
	{
		b = malloc(BUFFER_SİZE + 1 * sizeof(char));
		ft_memcpy(b,buffer,BUFFER_SİZE);
		ft_nline(b);
		
	}
	
	
	return ();
}
void ft_nline(char *b)
{
	static char *ptr;
	static int i;
	int j;
	char *tmp;

	
	ptr = b;
	j = 0;
	i = ft_strlen(ptr);
	while(ptr[j] != '\n' && ptr[j])
		j++;
	tmp =malloc(sizeof(char) * (BUFFER_SIZE - j) )
	ptr = *(ptr + j);
	
}
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	alan;

	if (!s1 || !s2)
		return (NULL);
	alan = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * alan + 1);
	i = -1;
	j = -1;
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
char *ft_free(char *buff)
{
	char *tmp;
	
	tmp = buff;
	free(buff);
	return(tmp);
}