/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:55:22 by znichola          #+#    #+#             */
/*   Updated: 2022/12/30 16:44:31 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include <time.h>

# define SUCCESS 0
# define FAILURE -1
# define MALLOC_ERROR 42
# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648

typedef enum e_bool
{
	false = 0,
	true = 1
}	t_bool;

typedef enum e_fork
{
	dirty = -1,
	clean = 1
}	t_fork;

typedef struct s_philo
{
	pthread_t		thread;
	int				id;
	int				diet;
	int				eatt;
	int				sleept;
	int				meals;
	int				is_eating;
	// int				x_my_fork; // should be a mutex
	int				x_fork_status;
	int				x_fork_lock;
	pthread_mutex_t	*mutex;
	t_bool			dead;
	struct s_philo	*to_left;
}	t_philo;

typedef struct s_app
{
	int				philo_count;
	int				ttdie;
	int				tteat;
	int				ttsleep;
	int				meals;
	pthread_mutex_t	mutex;
	t_philo			*philo;
}	t_app;

/* philo */

int	can_i_eat(t_philo *p);

/* init_philo */

void	free_philos(t_app *a);
int		init_philos(t_app *a);
int		thread_philos(t_app *a);
int		join_philos(t_app *a);

/* input */

int	input_check_assign(int ac, char **av, t_app *a);

/* safe atoi */

int		safe_add(int *a, int b);
int		safe_multi(int *a, int b);
int		ft_safe_atoi(int *n, char *str);

/* debug */

void	print_app(t_app *a);
void	print_log(t_app *a);

/* print */

void	print_philo(t_philo *p);
void	print_all_philos(t_app *a);


#endif /* philo */