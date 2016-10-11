#include "../includes/filler.h"

void		free_tab(char **tab)
{
	int		i;

	i = -1;
	while (tab[++i] != NULL)
		free(tab[i]);
	free(tab);
}

int			length_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void		print_tab(char **tab)
{
	int 	i;

	i = 0;
	while (tab[i])
	{
		ft_putnbr_fd(i, 2);
		ft_putchar_fd(' ', 2);
		ft_putendl_fd(tab[i], 2);
		++i;
	}
}

t_point		*create_point(int x, int y)
{
	t_point	*new;

	new = (t_point *)malloc(sizeof(t_point));
	new->x = x;
	new->y = y;
	new->next = NULL;
	return (new);
}

void		add_to_list(t_point **pos, int y, int x)
{
	t_point	*tmp;

	if (!(*pos))
	{
		(*pos) = create_point(x, y);
		return ;
	}
	tmp = (*pos);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = create_point(x, y);

}

void		debug(t_env *e)
{
	ft_putstr_fd("Num player = ", 2);
	ft_putnbr_fd(e->num_player, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Map X = ", 2);
	ft_putnbr_fd(e->map.x, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Map Y = ", 2);
	ft_putnbr_fd(e->map.y, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Piece X = ", 2);
	ft_putnbr_fd(e->piece.x, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Piece Y = ", 2);
	ft_putnbr_fd(e->piece.y, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Player X = ", 2);
	ft_putnbr_fd(e->player.x, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Player Y = ", 2);
	ft_putnbr_fd(e->player.y, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Opponent X = ", 2);
	ft_putnbr_fd(e->opponent.x, 2);
	ft_putendl_fd("", 2);

	ft_putstr_fd("Opponent Y = ", 2);
	ft_putnbr_fd(e->opponent.y, 2);
	ft_putendl_fd("", 2);
}
