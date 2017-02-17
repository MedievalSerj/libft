//
// Created by Serhii Ladonia on 2/17/17.
//

#include "libft.h"

int ft_readline(int fd, char **line)
{
	char *buf;
	int n;
	int l;
	int total;

	n = BUFF_SIZE;
	buf = ft_strnew((size_t)n);
	total = 0;
	while ((l = (int)read(fd, buf + total, 1)) > 0)
	{
		if (buf[total] == '\n')
			break ;
		total += l;
		if (total >= (n - 2))
			buf = resize_buf(buf, &n);
	}
	if (l == -1)
		return (-1);
	buf[total] = '\0';
	*line = buf;
	return (l);
}


/*int main()
{
	int fd;
	int ret;
	char *s;

	s = ft_strnew(2);
	fd = open("sample.txt", O_RDONLY);
	if (fd > 0)
	{
		while ((ret = ft_readline(fd, &s)) > 0)
//		ft_printf("ret = %d\n", ret);
		ft_printf("%s\n", s);
	}
	else
		ft_printf("fd = %d\n", fd);
	return (0);
}*/
