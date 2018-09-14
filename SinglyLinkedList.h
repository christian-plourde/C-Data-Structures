//the header file for the singly linked list file
#include "SinglyLinkedListNode.h"
#include <cstddef>
#include <iostream>

template <class T>
class SinglyLinkedList
{

  private:
    node<T> *head; //the first node in the list
    int count; //the count of items in the list

  public:
    SinglyLinkedList(); //constructor
    void add(node<T>); //add a node to the list
    void remove(node<T>); //remove a node from the list
    node<T> search(node<T>); //search the list for a particular node
    bool contains(node<T>); //determines if the passed node is in the list
    void clear(); //clears all the elements in the list
    void display(); //display the linked list's contents

};

template <class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
  head = NULL; //set the head of the list to point at nothing
  count = 0;
}

template <class T>
void SinglyLinkedList<T>::display()
{
  std::cout << "hello" << std::endl;
}
