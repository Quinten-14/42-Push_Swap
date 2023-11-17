/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbitset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qraymaek <qraymaek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 00:04:04 by qraymaek          #+#    #+#             */
/*   Updated: 2023/11/15 00:04:18 by qraymaek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_bit_set(unsigned int nbr, int pos)
{
	return ((nbr >> pos) & 1);
}
