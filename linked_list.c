#include <stdio.h>
#include <stdlib.h>
#include "linked_lists.h"
void print_list(struct node *y){
  struct node *current = y;
  int c = 0;
  while(current){
    printf("Node %d data: %d\n",c, current -> x);
    current = current->next;
    c++;
  }
}
struct node * insert_front(struct node *y, int a){
  struct node *new = (struct node*)malloc(sizeof(struct node));
  new -> x = a;
  new -> next = y;
  return new;
}
struct node * free_list(struct node *y){
  struct node *cur= y;
  while(cur){
    free(cur);
    cur = cur -> next;
  }
  return y;

}
