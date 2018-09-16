//the header file for the singly linked list file
#include <iostream>
#include <cstddef>
#include "SinglyLinkedListNode.h"

template <class T>
class SinglyLinkedList
{

  private:
    node<T> *head; //the first node in the list
    int count; //the count of items in the list

  public:
    SinglyLinkedList(); //constructor
    void add(node<T>*); //add a node to the list
    void remove(node<T>*); //remove a node from the list TODO
    node<T>* search(node<T>*); //search the list for a particular node TODO
    bool contains(node<T>*); //determines if the passed node is in the list
    void clear(); //clears all the elements in the list TODO
    void display(); //display the linked list's contents 

};

template <class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
  head = NULL; //set the head of the list to point at nothing
  count = 0; //initially there are no items in the list
}

template <class T>
void SinglyLinkedList<T>::add(node<T>* newNode)
{
  //if there are no elements in the list, just point the head to our node
  if(count == 0)
    head = newNode;

  else
  {
    //otherwise we need to point the new node to the current head
    newNode -> setNext(head);
    head = newNode;
  }

  //increase the size of the list by one
  count++;
}

template <class T>
bool SinglyLinkedList<T>::contains(node<T>* toFind)
{
  if(count == 0)
  {
    return false;
  }

  else
  {
    //start at the head
    node<T>* currentNode = head;

    int i = 0;

    for(i = 0; i<count; i++)
    {
      //for each element in the list, check if the pointers are equal.
      if(currentNode == toFind)
      {
        //if they point to the same object, return true
        return true;
      }

      else
      {
        //otherwise, move the currentNode to the next node
        currentNode = currentNode -> getNext();
      }
    }

    //if we exit the loop it means it was not found
    return false;
  }

}

template <class T>
void SinglyLinkedList<T>::display()
{
  if(count == 0)
    std::cout << "[]" << std::endl;

  else
  {
    //start at the head of the list.
    node<T> *currentNode = head;
    std::cout << "[";

    int i = 0;

    for(i = 0; i<count; i++)
    {
      if(i == count - 1)
      {
        std::cout << currentNode -> getData();
      }

      else
      {
        std::cout << currentNode -> getData() << ", ";
      }

      currentNode = currentNode -> getNext();
    }

    std::cout << "]" <<std::endl;
  }

}
