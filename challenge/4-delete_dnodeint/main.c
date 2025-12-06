#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for doubly linked list functions
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

    /* Attempt to delete remaining nodes safely */
    while (head != NULL)
    {
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
    }

    free_dlistint(&head);  /* Updated to match pointer-to-pointer version */
    head = NULL;

    return (EXIT_SUCCESS);
}
