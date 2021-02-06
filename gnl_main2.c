# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "ysaito_gnl.h"

int main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	*line;

if (argc == 2)
{
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("return (%d): line: %s\n", ret, line);
		free(line);
	}
		printf("return (%d): line: %s\n", ret, line);
		printf("FILE END\n");
		close(fd);
		free(line);
		system("leaks a.out");
		return (0);
	}
}
