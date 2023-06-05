#include "lists.h"
/**
* check_cycle - checks if a linked list contains a cycle
* @list: linked list to check
*
* Return: 1 if the list has a cycle, 0 if it doesn't
*/
int check_cycle(listint_t *list)
{
if (list == NULL)
return 0;

listint_t *fast = list;
listint_t *slow = list;

while (fast != NULL && fast->next != NULL) {
fast = fast->next->next;
slow = slow->next;

if (fast == slow)
return 1;
}
return 0;
}
