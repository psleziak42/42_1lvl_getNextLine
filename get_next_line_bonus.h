#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include<unistd.h>
#include<stdlib.h>
#include<limits.h>
#include<fcntl.h>
#include<stdio.h>

int	get_next_line(int fd, char **line);
int	ft_strlen(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int	ft_strchr(char *s);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
