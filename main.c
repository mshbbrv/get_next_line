#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void) {
	int		fd;
	char	*line;
	
	fd = open("test", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	close(fd);
    return (0);
}
