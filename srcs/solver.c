#include "../includes/filler.h"

int			place_piece(t_env *e, char c, int *overlay, t_point pos)
{
	if (pos.x < 0 || pos.y < 0 || c != e->player.c || c != e->player.c + 32 ||
		pos.x > e->map.x || pos.y > e->map.y)
		return (0);
	else if (c == e->player.c || c == e->player.c + 32)
		(*overlay)++;
	return ((*overlay > 1) ? 0 : 1);
}

int			hypothenus(t_point a, t_point b)
{
	int		dist;

	dist = ABS(a.x - b.x) + ABS(a.y - b.y);
	return (dist);
}

int			solve_filler(t_env *e)
{
	int			overlay;
	t_point pos;

	pos.y = -1;
	while (++pos.y < e->map.y)
	{
		pos.x = -1;
		while (++pos.x < e->map.x)
		{
			if (place_piece(e, e->map.map[pos.y][pos.y], &overlay, pos))
			{

			}
		}
	}
	return (0);
}
