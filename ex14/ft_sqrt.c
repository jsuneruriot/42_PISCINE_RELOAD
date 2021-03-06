/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:47:38 by juriot            #+#    #+#             */
/*   Updated: 2018/11/07 13:47:41 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while ((i * i) != nb)
	{
		if (i > nb / 2)
			return (0);
		i++;
	}
	if (nb == i * i)
		return (i);
	else
		return (0);
}
