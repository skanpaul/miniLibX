/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vector_decal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:40:48 by ski               #+#    #+#             */
/*   Updated: 2022/02/04 13:40:49 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

/* ************************************************************************** */
void init_vector_decal(t_data *data)
{
	int x_decal;
	int y_decal;

	x_decal = W_WIDTH / 2;
	y_decal = 100;

	data->decal = (t_p){.x = x_decal, .y = y_decal};
}
