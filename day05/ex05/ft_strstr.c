/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:41:25 by tmasala           #+#    #+#             */
/*   Updated: 2020/02/04 20:39:55 by tmasala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	
	i = 0;
	if (str == NULL || to_find == NULL)
	{
		return (NULL);
	}
	
