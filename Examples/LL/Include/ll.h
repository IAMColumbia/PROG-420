#ifndef LL_H
#define LL_H

#include<iostream>

template <class T> struct Node {
  T data;
  Node *next;

  Node(T data) {
    this->data = data;
    this->next = nullptr;
  }
};

template<class T>
void append(Node<T> **head, T data)
{
   Node<T> * temp = *head;
   Node<T> * new_node = new Node<T>(data);
   if(*head == nullptr)
   {
       *head = new_node;
       return;
   }

   if(temp->next != nullptr)
   {
       temp = temp->next;
   }
   temp->next = new_node;
}

template<class T>
void print(Node<T> **head){
    Node<T> *temp = *head;
    if(*head == nullptr)
    {
        return;
    }
    while(temp->next != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << temp->data << std::endl;
}
#endif /* LL_H */
