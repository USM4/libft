/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:37:04 by oredoine          #+#    #+#             */
/*   Updated: 2022/11/08 16:41:55 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *p)
{
	int	i;

	i = 0;
	while (*(p + i) != '\0')
		i++;
	return (i);
}