/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-k <ahideo-k@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:24:14 by ahideo-k          #+#    #+#             */
/*   Updated: 2026/07/02 16:24:14 by ahideo-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	tmp_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp_ptr[i] = '\0';
		i++;
	}
}
