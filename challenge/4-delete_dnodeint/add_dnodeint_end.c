#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a doubly linked list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *last;

    if (head == NULL)
        return NULL;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return NULL;

    new->n = n;
    new->next = NULL;

    if (*head == NULL) // Empty list
    {
        new->prev = NULL;
        *head = new;
        return new;
    }

    // Traverse to the end of the list
    last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = new;
    new->prev = last;

    return new;
}
