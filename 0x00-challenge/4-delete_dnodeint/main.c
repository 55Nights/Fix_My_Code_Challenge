#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "print_dlistint.c"
#include "delete_dnodeint_at_index.c"
#include "add_dnodeint_end.c"
#include "free_dlistint.c"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 3);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	free_dlistint(head);
	return (0);
}
