/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:40:19 by tmasala           #+#    #+#             */
/*   Updated: 2020/02/05 21:32:16 by tmasala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != 0)
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
