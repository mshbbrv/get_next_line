#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void) {
	int		fd;
	char	*line;
	int		ret;
	//ret = 1;
	//fd = open("tests/42_char", O_RDONLY);
	fd = open("wartests/lorem_ipsum", O_RDONLY);
	//fd = 0;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("ret = %d |%s\n", ret, line);
		free(line);
	}
	printf("ret = %d |%s\n", ret, line);
	//free(line);
	close(fd);
    return (0);
}
