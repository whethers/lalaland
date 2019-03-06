/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whethers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 15:56:18 by whethers          #+#    #+#             */
/*   Updated: 2019/03/06 18:29:27 by whethers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = argc;
	while (--j > 0)
	{
		i = -1;
		while (argv[j][++i] != '\0')
			ft_putchar(argv[j][i]);
		ft_putchar('\n');
	}
	return (0);
}
