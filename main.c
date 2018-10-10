#include <stdio.h>
#include <stdlib.h>
#include "linked_lists.h"
int main(){
  struct node *head = (struct node*)malloc(sizeof(struct node));
  struct node *tail = NULL;
  head -> x = 13;
  head -> next = tail;
  printf("testing print_list: \n");
  print_list(head);
  for (int y = 0;y < 10; y++){
    head = insert_front(head,y);
  }
  printf("-----\n");
  printf("testing insert_front: \n");
  print_list(head);
  head = free_list(head);
  printf("-----\n");
  printf("testing free_list(should return void pointer): \n");
  printf("%p\n", head);
  return 0;
}
