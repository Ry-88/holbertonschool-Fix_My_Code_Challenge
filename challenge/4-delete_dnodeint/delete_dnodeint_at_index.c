#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a doubly linked list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;

    /* Traverse to the node at the given index */
    for (i = 0; i < index; i++)
    {
        if (current->next == NULL)
            return -1;
        current = current->next;
    }

    /* Update the previous node's next pointer */
    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        *head = current->next;  /* Deleting the first node */

    /* Update the next node's prev pointer */
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return 1;
}
