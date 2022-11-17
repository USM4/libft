/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:51:38 by oredoine          #+#    #+#             */
/*   Updated: 2022/11/16 16:04:16 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)

{
	if (((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) || (a >= 48 && a <= 57))
		return (1);
	else
		return (0);
}
