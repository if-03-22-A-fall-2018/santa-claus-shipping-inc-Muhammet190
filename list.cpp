#include <stdlib.h>
#include "list.h"

struct Node
{
  struct Node* Next;
  void *data;
};

struct List
{
  struct Node* head;
}

List* list_create()
{
  return (List *)malloc(sizeof(struct Node));
}

/**
 * Used to free all memory the supplied list allocated
 * (hint: list structure, including the list itself, but not the data!)
 */

void list_delete(List *list)
{

}

/**
 * Adds a new node with the supplied data to the start of the list
 */
void list_add(List *list, void *data)
{
  struct Node * newNode = (Node *)malloc(sizeof(struct Node));
  newNode->data = data;

  if (list->head == 0)
  {
    list->head = newNode;
  }
  else
  {
    newNode->Next = list->head;
    list->head = newNode;
  }

}

/**
 * Adds a new node with the supplied data after the supplied node
 */
void list_insert_after(Node *node, void *data)
{
  Node* newNode = (Node*)malloc(sizeof(struct Node));
  newNode->data = data;

  newNode->Next = node->Next;
  node->Next = newNode;
}

/**
 * Return the head of the list
 */
Node* list_get_first(List *list)
{
  return list->head;
}

/**
 * Returns the next node in the list
 * (hint: be careful if the last node in the list is supplied)
 */
Node* list_get_next(Node *node)
{
  return node->Next;
}

/**
 * Retrieves the data stored in the supplied node
 * (hint: you'll probably won't be able to use this void* without casting)
 */
void* list_get_data(Node *node)
{

}
