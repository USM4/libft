/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:34:15 by oredoine          #+#    #+#             */
/*   Updated: 2022/11/15 20:39:51 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)

{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// #include<fcntl.h>
// int main()
// {
// 	int fd;
// 	fd = open("txt.txt",O_RDWR);
// 	char *p="oredoine";
// 	ft_putstr_fd(p,fd);
// }
