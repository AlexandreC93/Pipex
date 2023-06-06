#ifndef PIPEX_H
# define PIPEX_H

# include "./libft/get_next_line/get_next_line_bonus.h"

typedef struct s_data
{
	int nb_pipe;
    int fd1;
    int fd2;

} t_data;

void fill_struct(char **av, t_data *data);
int ft_listlen(char **av, t_data *data);
char    *find_path(char **env, char **av);
#endif