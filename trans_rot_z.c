/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans_rot_z.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:17:18 by ski               #+#    #+#             */
/*   Updated: 2022/02/02 08:17:20 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

/* ************************************************************************** */
static void	transformation(t_data *data);

/* ************************************************************************** */
t_p	*trans_rot_z(t_p *input, t_data *data, double alpha)
{
	int	x;
	int	y;
	int	max_c;
	int	max_l;

	max_c = data->info_table.max_c;
	max_l = data->info_table.max_l;
	data->cos_alpha = cos(alpha);
	data->sin_alpha = sin(alpha);
	data->output = (t_p *)malloc((max_l * max_c) * sizeof(t_p));
	data->input = input;
	y = 0;
	while (y < max_l)
	{
		x = 0;
		while (x < max_c)
		{
			data->x = x;
			data->y = y;
			transformation(data);
			x++;
		}	
		y++;
	}
	return (data->output);
}

/* ************************************************************************** */
static void	transformation(t_data *data)
{
	int	x;
	int	y;
	int	max_c;
	int	max_l;

	x = data->x;
	y = data->y;
	max_c = data->info_table.max_c;
	max_l = data->info_table.max_l;
	data->output[x + y * max_c].x
		= nearbyint(data->input[x + y * max_c].x * data->cos_alpha)
		+ nearbyint(data->input[x + y * max_c].y * (-data->sin_alpha));
	data->output[x + y * max_c].y
		= nearbyint(data->input[x + y * max_c].x * data->sin_alpha)
		+ nearbyint(data->input[x + y * max_c].y * data->cos_alpha);
	data->output[x + y * max_c].z = data->input[x + y * max_c].z;
}
