#include <stdio.h>
#include <stdlib.h>

size_t print_listint(const listint_t *h)
{
int data;
struct dlistint* prev;
struct dlistint* next;
}
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

{
dlistint_t* node1 = (dlistint_t*)malloc(sizeof(dlistint_t));
dlistint_t* node2 = (dlistint_t*)malloc(sizeof(dlistint_t));
dlistint_t* node3 = (dlistint_t*)malloc(sizeof(dlistint_t));

{
node1->data = 1;
node2->data = 2;
node3->data = 3;

node1->prev = NULL;
node1->next = node2;

node2->prev = node1;
node2->next = node3;

node3->prev = node2;
node3->next = NULL;

free(node1);
free(node2);
free(node3);
}

return 0;
}

