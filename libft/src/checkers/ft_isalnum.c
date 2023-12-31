/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qraymaek <qraymaek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:58:47 by qraymaek          #+#    #+#             */
/*   Updated: 2023/10/30 22:16:19 by qraymaek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (('0' <= i && i <= '9') || ('A' <= i && i <= 'Z')
		|| ('a' <= i && i <= 'z'))
		return (1);
	return (0);
}
