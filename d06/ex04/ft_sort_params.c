/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whethers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 16:14:46 by whethers          #+#    #+#             */
/*   Updated: 2019/03/06 16:31:44 by whethers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int main(int argc, char **argv)
{
    int i;
    int j;
    j = argc;
	char a;
	int b;
    while (--j > 0)
    {
        i = -1;
		while (argv[j][++i] != '\0')

	            ft_putchar(argv[j][i]);
        ft_putchar('\n');
    }
	
    return (0);
}
