#include "pipex.h"

int main(int ac, char **av, char **env)
{
    t_data *data;
    char    *str;

    data = malloc(sizeof(t_data));
    if (!data)
        return (0);
    if (ac)
        str = find_path(env, av);
    printf("%s", str);
    return (0);
}

// char    *parse_cmd(char **av)
// {
//     char    *str;
//     return (str);
// }

char    *find_path(char **env, char **av)
{
    int     i;
    int     len;
    char    *str;
    char    **tab;

    i = 0;
    while (env[i++])
    {
        if (ft_strnstr(env[i], "PATH", 4))
        {
            len = ft_strlen(env[i]);
            tab = malloc(sizeof(char*) * len);
            tab = ft_split(env[i], ':');
        }
    }
    i = 0;
    while (tab[i])
    {
        str = ft_strjoin(tab[i], "/");
        if (!str)
            return (NULL);
        if (access(str = ft_strjoin(str, av[2]), X_OK) == 0)
            break;
        i++;
    }
    return (str);
}
