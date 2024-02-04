#include "lists.h"

/**
 * check_cycle - function that verifies if cycle exists in singly linked list
 * @list: the starting node of the list
 * Return: 0 if there is no cycle, 1 if a cycle is detected
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);

	for (current = list, check = list->next;
		current != NULL && check != NULL && check->next != NULL;
		current = current->next, check = check->next->next)
	{
	if (current == check)
		return 1;
	}

	return 0;
}
