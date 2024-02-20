#include "sort.h"
/**
 * insertion_sort_list -  sorts a DLL of integers using the Insertion sort
 * @list: list to sort
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	int complete = 0;
	listint_t *tmp, *aux;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	tmp = (*list);
	aux = tmp->next;
	while (aux)
	{
		while (tmp)
		{
			if (aux->n < tmp->n)
			{
				if (aux->next)
					aux->next->prev = aux->prev;
				else
					complete = 1;
				tmp->next = aux->next;
				aux->next = tmp;
				aux->prev = tmp->prev;
				if (tmp->prev)
					tmp->prev->next = aux;
				else
					*list = aux;
				tmp->prev = aux;
				tmp = aux->prev;
				print_list(*list);
			}
			else
			{
				aux = aux->next;
				tmp = tmp->next;
			}
		}
		if (complete)
			break;
		aux = aux->next;
		tmp = aux->prev;
	}
}
