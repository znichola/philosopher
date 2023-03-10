/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:50:13 by znichola          #+#    #+#             */
/*   Updated: 2023/02/24 22:41:24 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# define SUCCESS 0
# define FAILURE -1
# define FATAL_ERROR 42
# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648

enum
{
	e_num_philos = 0,
	e_time_to_die = 1,
	e_time_to_eat = 2,
	e_time_to_sleep = 3,
	e_n_of_meals = 4,
};

enum
{
	e_msg_taken_fork,
	e_msg_is_eating,
	e_msg_is_sleeping,
	e_msg_is_thinking,
	e_msg_is_dead
};

typedef enum e_bool
{
	false = 0,
	true = 1
}	t_bool;

enum e_fork
{
	dirty = -1,
	clean = 1
};

enum
{
	e_not_in_use = 0,
	e_in_use = 1,
};

#endif
