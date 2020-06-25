/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbumhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:20:09 by tbumhira          #+#    #+#             */
/*   Updated: 2020/06/25 14:24:18 by tbumhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#includiint		ft_iterative_factorial(int nb)
{
	int	i = 0;
	int	fraction = nb;

	if (nb >= 2)
	{
		while (++i < nb)
			fraction = fraction * (nb - i);
		return (fraction);
	}
	else
		return (1);
}
