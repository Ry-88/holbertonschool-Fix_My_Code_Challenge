#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t **head)
{
    dlistint_t *node;
    dlistint_t *tmp;

    if (head == NULL || *head == NULL)
        return;

    node = *head;
    while (node)
    {
        tmp = node->next;
        free(node);
        node = tmp;
    }

    *head = NULL;  /* Avoid dangling pointer */
}
