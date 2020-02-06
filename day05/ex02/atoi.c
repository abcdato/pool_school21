/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:57:31 by tmasala           #+#    #+#             */
/*   Updated: 2020/02/04 21:34:22 by tmasala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		result;
	int		sign;
	int		i;

	result = 0;
	sign = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t')
			|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}
