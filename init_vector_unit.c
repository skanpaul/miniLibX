/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vector_unit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:40:48 by ski               #+#    #+#             */
/*   Updated: 2022/02/04 13:40:49 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

/* ************************************************************************** */
void init_vector_unit(t_data *data)
{
	data->vu_i = (t_p ){.x = 2, 	.y = 1, 	.z = 0};
	data->vu_j = (t_p ){.x = -2, 	.y = 1, 	.z = 0};
	data->vu_k = (t_p ){.x = 0, 	.y = -1, 	.z = 0};
}
