/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:48:39 by znichola          #+#    #+#             */
/*   Updated: 2023/02/24 15:33:38 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// void	print_philo(t_philo *p)
// {
// 	if (p == NULL)
// 		return ;
// 	printf("   id:%-3d   die_time:%-5d\n", p->id, p->diet);
// 	printf("meals:%-3d   eat_time:%-5d\n", p->meals, p->eatt);
// 	printf(" dead:%-3d sleep_time:%-5d\n", p->dead, p->sleept);
// 	printf("\n");
// }

// void	print_app(t_app *a)
// {
// 	printf("count:%-3d time_to_die:%-5d\n", a->philo_count, a->ttdie);
// 	printf("meals:%-3d time_to_eat:%-5d\n", a->meals, a->tteat);
// 	printf("        time_to_sleep:%-5d\n", a->ttsleep);
// 	printf("\n");
// }

void	print_log(int id, int msg)
{
	printf("timestamp_in_ms %d ", id);
	if (msg = 0)
		printf(" has taken a fork\n");
	else if (1)
		printf(" is sleeping\n");
	else if (1)
		printf(" is thinking\n");
	else if (1)
		printf(" dead\n");
}
