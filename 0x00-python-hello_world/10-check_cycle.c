#include "lists.h"

/**
 * check_cycle - function that verifies if cycle exists in singly linked list
 * @list: the starting node of the list
 * Return: 0 if there is no cycle, 1 if a cycle is detected
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
