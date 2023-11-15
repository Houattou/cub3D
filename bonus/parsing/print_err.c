/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:29:48 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/15 16:16:54 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"
#include "../../libft/libft.h"

void	print_err(char *s)
{
	write(2, "Error\n", 6);
	ft_putstr_fd(s, 2);
	exit(1);
}
