/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:04:02 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/14 10:02:38 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str, t_list *stack);
int		ft_lstsize(t_list *lst);
int		ft_lst_is_sorted(t_list *lst);
int		ft_lstmax(t_list *lst);
int		ft_lstmin(t_list *lst);
void	ft_putstr(char *s);
void	ft_swap(t_list	*lst);
void	ft_push(t_list **lst1, t_list **lst2);
void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);
void	ft_exit(t_list *list);
void	ft_index(t_list *stack);
void	ft_order(t_list *stack);
void	ft_lstclear(t_list **lst);
void	ft_min_and_max(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_radix(t_list *stack_a, t_list *stack_b);
void	ft_small_sort(t_list *stack_a, t_list *stack_b, int size);
void	ft_repush_small_sort(t_list **stack_a, t_list **stack_b, int size);
void	ft_sort_three(t_list *stack, int min, int max);
void	*ft_malloc(int count, int size, t_list *lst);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(int value, t_list *stack);
t_list	*ft_fill_stack(char **data, int size);

#endif