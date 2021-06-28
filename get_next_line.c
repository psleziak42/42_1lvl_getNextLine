/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psleziak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:04:22 by psleziak          #+#    #+#             */
/*   Updated: 2021/05/21 17:37:23 by psleziak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_after_n(char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\0')
	{
		free(s);
		return (0);
	}
	j = ft_strlen(s) - i;
	str = ft_calloc((j + 1), sizeof(char));
	if (!str)
		return (0);
	j = 0;
	while (s[++i] != '\0')
		str[j++] = s[i];
	free(s);
	return (str);
}

char	*ft_till_n(char *s)
{
	int		i;
	char	*line;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	line = ft_calloc((i + 1), sizeof(char));
	if (!line)
		return (0);
	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		line[i] = s[i];
		i++;
	}
	return (line);
}

static int	output(int x)
{
	if (x > 0)
		return (1);
	return (0);
}	

int	get_next_line(int fd, char **line)
{
	int			r;
	char		*buff;
	static char	*saved[4096];

	r = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
		return (-1);
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (-1);
	while (r > 0 && (!(ft_strchr(saved[fd]))))
	{
		r = read(fd, buff, BUFFER_SIZE);
		if (r == -1)
		{
			free(buff);
			return (-1);
		}
		buff[r] = '\0';
		saved[fd] = ft_strjoin(saved[fd], buff);
	}
	free(buff);
	*line = ft_till_n(saved[fd]);
	saved[fd] = ft_after_n(saved[fd]);
	return (output(r));
}
