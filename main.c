#include <stdio.h>
#include <stdlib.h>
#include "intsort.h"


IntNode *header = NULL;

// create a node
IntNode *createNode(int val) {
  IntNode *n = (IntNode *) malloc(sizeof(IntNode) * 1);
  n->item = val;
  n->next = NULL;
  return n;
};

// insert a node into the chain, in sorted order
void insert(IntNode *header, int val) {
  IntNode *n = createNode(val);
  n->next = header;
  header = n;
};
// print the values stored in the chain of nodes
void printAll(IntNode *header) {
  printf("Here are the numbers in sorted order: ");
  while (header->next != NULL) {
    printf(" %d", header->item);
    header = header->next;
  }
  
};

int main() {

  return 0;
}

