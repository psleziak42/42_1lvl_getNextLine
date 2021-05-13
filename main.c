#include "get_next_line.h"
#include<stdio.h>

int main()
{
	int i;
	int fd;
	char *line;

	i = 1;	
	fd = open("tony.txt", O_RDONLY);
	while(i != 0)
	{
		i = get_next_line(fd, &line);
		printf("%s\n", line);
		printf("%d\n", i);
	}
	return 0;
}
