#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

int data;
struct dlistint* prev;
struct dlistint* next;
{
dlistint_t;
void printDList(dlistint_t* head)
{
dlistint_t* current = head;
printf("Elements of the list: ");

while (current != NULL)
{
printf("%d ", current->data);
current = current->next;
}

printf("\n");
}

return 0;
}

