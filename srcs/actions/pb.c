/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:46:31 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/10 10:46:31 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Push first node of stack a on stack b.
//Does nothing if a is empty
void	pb(t_push_swap *data)
{
	t_stack	*first_node_a;
	t_stack	*first_node_b;

	first_node_a = data->stack_a;
	if (first_node_a == NULL)
		return ;
	first_node_b = data->stack_b;
	data->stack_a = first_node_a->next;
	first_node_a->next = first_node_b;
	data->stack_b = first_node_a;
	data->size_a = get_stack_size(data->stack_a);
	data->size_b = get_stack_size(data->stack_b);
	ft_printf("pb\n");
}
