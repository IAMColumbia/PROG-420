#include "Include/ll.h"

int main()
{
    Node<int> *head = new Node<int>(1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);


    ///A LOT OF STUFF HAPPENS HERE
    delete head;
    head = nullptr;

    // A LOT MORE HAPPENS

    print(&head);
}
