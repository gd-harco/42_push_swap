/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:01:51 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/14 11:02:01 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack	t_stack;

struct s_stack
{
	size_t	index;
	int		value;
	t_stack	*next;
};

typedef struct s_push_swap
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size_a;
	int		size_b;
}			t_push_swap;

int			get_stack_size(t_stack *stack);
char		*strjoin(int size, char **strs, char *sep);
t_stack		*stack_last(t_stack *stack);
t_stack		*stack_new(size_t index, char *str);
t_stack		*get_last_node(t_stack **stack);
bool		have_duplicate(char **to_check);
bool		have_non_digit(char **to_check);
bool		have_weird_str(char **to_check);
bool		is_sorted(t_stack *stack);
long long	ft_atoll(const char *str);
void		parse_nb(t_push_swap *data, int new_argc, char **argv);
void		stack_add_back(t_stack **stack, t_stack *new);
void		index_stack(t_push_swap *data);
void		sa(t_push_swap *data);
void		pb(t_push_swap *data);
void		pa(t_push_swap *data);
void		ra(t_push_swap *data);
void		rra(t_push_swap *data);
void		sorting(t_push_swap *data);
void		sort_small(t_push_swap *data);
void		free_stack(t_stack *stack);

#endif
