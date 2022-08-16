#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node int the list
 *
 * Return: pointer to the first node int the new list
 */
listint_t *reverse_listint(lisint_t **head)
{
	lisint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
