/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:01:20 by znichola          #+#    #+#             */
/*   Updated: 2023/02/25 17:39:24 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <pthread.h>
# include "defines.h"

typedef struct s_philo
{
	pthread_t		my_thread;
	int				id_number;
	int				eat_time;
	int				sleep_time;
	int				time_to_die;
	int				meals_left;
	int				fork_state;
	pthread_mutex_t	fork_lock;
	int				death_state;
	pthread_mutex_t	death_lock;
	long long		last_meal_time;
	// pthread_mutex_t	last_meal_lock;
	int				death_log_state;
	pthread_mutex_t	death_log_lock;
	struct s_philo	*to_left;
}	t_philo;

typedef struct s_app
{
	int			args[5];
	t_philo		*philo_table;
}	t_app;

#endif
