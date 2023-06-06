#include "pipex.h"

int read_file(t_data *data, char **av)
{
    char    *buffer;
    int     fd;

    fd = open(av[1], O_RDONLY);
    data->fd1 = fd;
    buffer = "";
    while (buffer)
    {
        buffer = get_next_line(fd);
        
    }
    return 0;
}