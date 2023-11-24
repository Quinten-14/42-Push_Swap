/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qraymaek <qraymaek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:14:51 by qraymaek          #+#    #+#             */
/*   Updated: 2023/11/24 23:47:27 by qraymaek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../includes/libft.h"

void	check_dup(t_stack *stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = stack_a;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->nbr == tmp2->nbr)
			{
				ft_putendl("Error");
				free_on_error(stack_a);
				exit(0);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	check_int(char *str, t_stack *stack_a)
{
	long	nbr;

	nbr = ft_atoi(str);
	if (nbr > INT_MAX || nbr < INT_MIN)
	{
		ft_putendl("Error");
		free_on_error(stack_a);
		exit(0);
	}
}

void	check_str(char *str, t_stack *stack_a)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_putendl("Error");
			free_on_error(stack_a);
			exit(0);
		}
		i++;
	}
}

void	checks(char *str, t_stack *stack_a)
{
	check_str(str, stack_a);
	check_int(str, stack_a);
}
