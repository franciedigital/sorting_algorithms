#include "sort.h"

/**
 * swap_nodes - swap two listint_t nodes
 * @head: head of list
 * @node1: first node
 * @node2: second node
 *
 * Return: void
 */
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	if (prev)
		prev->next = node2;
	node2->prev = prev;
	node1->prev = node2;
	next = node2->next;
	if (next)
		next->prev = node1;
	node1->next = next;
	node2->next = node1;
	if (*head == node1)
		*head = node2;
}

/**
 * insertion_sort_list - sorts a list using insertion sort algorithm
 * @list: pointer to the list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list, *temp2;
	int swap;

	if (!(*list))
		return;

	while (temp->next)
	{
		swap = 0;
		if (temp->n > temp->next->n)
		{
			swap_nodes(list, temp, temp->next);
			swap = 1;
			print_list(*list);
		}
		if (swap == 1)
		{
			temp2 = temp->prev;
			while (temp2->prev)
			{
				if (temp2->n < temp2->prev->n)
				{
					swap_nodes(list, temp2->prev, temp2);
					print_list(*list);
				}
				else
					break;
			}
		}
		else
			temp = temp->next;
	}
}
