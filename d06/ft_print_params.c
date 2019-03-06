/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whethers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 07:48:38 by whethers          #+#    #+#             */
/*   Updated: 2019/03/06 07:52:13 by whethers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

int main(int ardc, char **argv)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (argv[j][i] != ' ' && argv[j][i] != '\n')
	{
	ft_putchar(argv[j][i++]);
	}
	else if (argv[j][i] == ' ')
	{
		ft_putchar ('\n');
		i = 0;
		j++;
	}
	else
	{
	i = 0;
	}
	return (0);
}	
