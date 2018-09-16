#include <iostream>
#include "SinglyLinkedList.h"

int main()
{
  SinglyLinkedList<int>* list = new SinglyLinkedList<int>();

  node<int>* node1 = new node<int>();
  node1 -> setData(3);
  node<int>* node2 = new node<int>();
  node2 -> setData(4);
  node<int>* node3 = new node<int>();
  node3 -> setData(5);




  list -> add(node1);
  list -> add(node2);
  list -> display();





}