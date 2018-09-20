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
  node<int>* node4 = new node<int>();
  node4 -> setData(6);
  node<int>* node5 = new node<int>();
  node5 -> setData(7);

  list -> add(node1);
  list -> add(node2);
  list -> add(node3);
  list -> add(node4);
  list -> add(node5);
  list -> display();
  list -> remove(node3);
  list -> display();
  list -> clear();
  list -> display();





}