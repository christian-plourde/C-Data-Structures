//the header file for a generic singly linked list node

template <class T>
struct node
{
  T data;
  struct node *next;
};