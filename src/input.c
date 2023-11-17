/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qraymaek <qraymaek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:04:42 by qraymaek          #+#    #+#             */
/*   Updated: 2023/11/17 19:00:14 by qraymaek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*enter_input_string(char **av)
{
	t_stack	*stack_a = NULL;
    int	i = 0;
    char	**split = ft_split(av[1], ' ');

    while (split[i])
    {
        checks(split[i], stack_a);
        stack_a = add_node(stack_a, ft_atoi(split[i]));
        i++;
    }

    // Free the split array
    i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);

    return (stack_a);
}

t_stack	*enter_input_seperate(int ac, char **av)
{
    t_stack	*stack_a = NULL;
    int	i = 0;

    while (i < ac - 1)
    {
        checks(av[i + 1], stack_a);
        stack_a = add_node(stack_a, ft_atoi(av[i + 1]));
        i++;
    }
    return (stack_a);
}

t_stack	*get_input(int ac, char **av)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (ac == 2)
		stack_a = enter_input_string(av);
	else
		stack_a = enter_input_seperate(ac, av);
	return (stack_a);
}
