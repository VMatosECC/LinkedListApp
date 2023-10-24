// LinkedListApp.cpp : 

#include <iostream>
#include "Node.h"
#include "MyLinkedList.h"

void experiment01();
void experiment02();

int main()
{
    //experiment01();
    experiment02();
    cout << "All done!\n";
}
//--------------------------------------------------------------
void experiment02() {
    MyLinkedList lst1;
    lst1.addTail(33);
    lst1.addTail(44);
    lst1.addTail(77);
    //cout << "lst1 " << lst1.toString() << endl;

    ////Testing find function
    //int n = 77;
    //Node* p1 = lst1.find(n);
    //if (p1 != nullptr)
    //    cout << n << " Found  " << p1->toString() << endl;
    //else
    //    cout << "Sorry, data not found\n";


    ////Testing deleteTail
    //cout << "\nAfter deleteTail\n";
    //lst1.deleteTail();
    //lst1.deleteTail();
    //lst1.deleteTail();
    //cout << lst1.toString() << endl;

    //Testing deleteAfter method
    cout << (lst1.deleteNodeAfter(333)? "Found and removed" : "Not removed") << endl;
    cout << lst1.toString() << endl;


}

//--------------------------------------------------------------
void experiment01() {
    Node n1(22);
    Node n2(11);
    Node n3(33);

    cout << "n1 " << n1.toString() << endl;
    cout << "n2 " << n2.toString() << endl;
    cout << "n3 " << n3.toString() << endl;


    n1.next = &n2;
    n2.next = &n3;

    cout << "After connecting the nodes\n";
    cout << "n1 " << n1.toString() << endl;
    cout << "n2 " << n2.toString() << endl;
    cout << "n3 " << n3.toString() << endl;

    cout << "\n\nTraversing the linked list\n";
    Node* head = &n1;
    Node* p = head;

    while (p != nullptr) {
        cout << p->toString() << endl;
        p = p->next;
    }

 

}