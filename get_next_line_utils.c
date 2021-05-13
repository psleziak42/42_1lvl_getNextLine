#include "get_next_line.h"

int	ft_strlen(char *s1)
{
	int i;
	
	i = 0;
	if (!s1)
		return 0;
	while(s1[i] != '\0')
		i++;
	return i;
}

char	*ft_strdup(char *s)
{
	int i;
	char *str;

	i = ft_strlen(s);
	str = ft_calloc((i + 1), sizeof(char));
	if (!str)
		return 0;
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	//str[i] = '\0';
	return str;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	char *new;
	
	new = malloc(nmemb * size);
	if (new == 0)
		return 0;
	i = 0;
	while (i < nmemb * size)
	{
		new[i] = '\0';
		i++;
	}
	return new;
}

char	*ft_strjoin(char *s1, char *s2)
{
	char *new;
	int i;
	int j;
	
	if (!s1 && !s2)
		return 0;
	if (!s1)
		return ft_strdup(s2);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = ft_calloc(i, sizeof(char));
	if (!new)	
		return(0);
	i = -1;
	j = -1;
	while(s1[++i] != '\0')
		new[i] = s1[i];
	while(s2[++j] != '\0')
		new[i + j] = s2[j];
	free(s1);
	return(new);
}

int	ft_strchr(char *s)
{
	int i;
	
	i = 0;
	if (!s)
		return 0;
	while(s[i] != '\0')
	{
		if (s[i] == '\n')
			return 1;
		i++;
	}
	return 0;
}
