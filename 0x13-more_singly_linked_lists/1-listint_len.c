#include <lists.h>

/**
 * print_list_len - Prints the elements of a linked list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t print_listint_len(const listint_t *h)
{
	size_t count = 0;

	while (head ! = NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
