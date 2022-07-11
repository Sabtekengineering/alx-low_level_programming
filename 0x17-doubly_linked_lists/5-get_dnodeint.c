#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the linked list
 * @head: pointer to head list
 * @index: the index of the node, starting from 0
 *
 * Return: NULL if the node does note exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int node_size;
dlistint_t *tmp;

node_size = 0;
if (head == NULL)
return (NULL);

tmp = head;
while (tmp)
{
if (index == node_size)
return (tmp);
node_size++;
tmp = tmp->next;
}
return (NULL);
}
