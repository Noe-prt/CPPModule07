/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:03:15 by nopareti          #+#    #+#             */
/*   Updated: 2025/04/12 16:03:15 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename A, typename B, typename C>
void iter(A *array, B length, C func)
{
	for (B i = 0; i < length; ++i)
		func(array[i]);
}

#endif