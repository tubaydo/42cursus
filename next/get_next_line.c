/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:41:49 by tubaaydogan       #+#    #+#             */
/*   Updated: 2022/12/09 16:26:24 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char buffer[50];
	char *line;
	char *tmp;
	
	if (fd > 0 && read (fd, buffer, BUFFER_SİZE) >= 0 && BUFFER_SİZE > 0)
	{
		while (ft_check(buffer))
		{
			ft_read(fd,buffer);
			tmp = ft_str(buffer);
		}
		tmp = line;
		ft_clear(tmp);
		return (line);
	}
	return (NULL);
}

char *ft_read(int fd, char *buffer)
{
	char *buff;
	int byte;
	
	buff = malloc(BUFFER_SİZE + 1 * sizeof(char));
	if (!buff)
		return (NULL);
	byte = 1;
	if (ft_check(buffer) && byte != 0)
	{
		byte = read(fd, buff, BUFFER_SİZE);
		if (byte == -1)
		{
			free(buff);
			return (NULL); 
		}
		buff[byte] = '\0';
		buffer = ft_strjoin(buffer,buff);
		free (buff);
		return (buffer);
	}
	return (buffer);
}

char *ft_str(char *buffer)
{
	static char *ptr;
	char *tmp;
	int j;
	int c;

	j = 0;
	ptr = ft_strjoin(ptr,buffer);
	tmp = ptr;
	c =  ft_check(tmp);
	if (c == 0)
	{
		while (ptr[j] != '\0')
		{
			if (ptr[j] == '\n')
			{
				ptr = ft_substr(ptr,j,ft_strlen(tmp));
				return (ft_substr(ptr,0,j));
			}
			else
				j++;
		}
	}
	return (ptr);
}

ft_clear()








#include "stdio.h"

int main()
{
	int fd;
	char *s;
	
	fd = open("a.txt", O_RDONLY, 0777);
	s = get_next_line(fd);
	printf("%s",s);
	return(0);
}