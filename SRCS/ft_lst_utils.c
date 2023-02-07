/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:39:07 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/07 15:28:45 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 1;
	while (lst -> next)
	{
		lst = lst -> next;
		size++;
	}
	return (size);
}

int	ft_lst_is_sorted(t_list *lst)
{
	int	i;

	i = 0;
	ft_printlst(lst, NULL);
	printf("------\n");
	while (lst)
	{
		printf("i = %d, index = %d\n", i, lst->index);
		if (lst->index < i)
		{
			printf("***\n");
			return (0);
		}

		i = lst->index;
		// printf("-->  i = %d, index = %d\n", i, lst->index);
		lst = lst->next;
		// printf("i = %d\n", i);
	}
	return (1);
}

t_list	*ft_lstnew(int value)
{
	t_list	*lst;

	lst = ft_malloc(1, sizeof(*lst));
	lst->value = value;
	lst->index = -1;
	lst->next = NULL;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else if (lst)
	{
		temp = *lst;
		while (temp -> next)
			temp = temp -> next;
		temp -> next = new;
	}
}
