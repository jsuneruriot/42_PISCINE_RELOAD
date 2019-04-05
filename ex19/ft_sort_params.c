/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:41:46 by juriot            #+#    #+#             */
/*   Updated: 2018/11/07 14:41:48 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' || s2[j] != '\0')
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		j++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		k;
	char	*temp;

	i = 1;
	k = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
			i = 0;
		}
		i++;
	}
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
}
