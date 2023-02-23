#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t);
void print_list(const listint_t *);
void print_list_rev(const listint_t *);
void bubble_sort(int *, size_t);
void insertion_sort_list(listint_t **);
void swap_nodes(listint_t **, listint_t *, listint_t *);
void selection_sort(int *, size_t);
void quick_sort(int *, size_t);
void _qsort(int *, int, int, int);
void shell_sort(int *, size_t);
void cocktail_sort_list(listint_t **);
void counting_sort(int *, size_t);
void merge_sort(int *, size_t);
void heap_sort(int *, size_t);

#endif