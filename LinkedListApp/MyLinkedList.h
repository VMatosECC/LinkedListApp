#pragma once
#include "Node.h"

class MyLinkedList
{
public:
    //Data Member
    Node* head;
    //---------------------------------------------------------
    //Constructor
    MyLinkedList() {
        head = nullptr;
    }
    
    //---------------------------------------------------------
    //UserDefined functions
    void addTail(int dataValue) {
        Node* n = new Node(dataValue);

        //is the list empty?
        if (head == nullptr) {
            head = n;
            return;
        }

        //find the last node
        Node* p = head;
        while (p->next != nullptr) p = p->next;

        //connect 'old' last node to 'new' node;
        Node* newNode = new Node(dataValue);
        p->next = newNode;
    }

    //--------------------------------------------------------------
    Node* find(int dataValue) {
        Node* p = head;
        while (p != nullptr) {
            if (p->data == dataValue) {
                return p;
            }
            p = p->next;
        }
        return nullptr;
    }
    //--------------------------------------------------------------
    string toString() {
        stringstream sout;
        sout << "\nMyLinkedList  Head: " << head << endl;
        Node* p = head;
        while (p != nullptr) {
            sout << "\t" << p->toString() << endl;
            p = p->next;
        }
        return sout.str();
    }

    //---------------------------------------------------------------
    void deleteTail() {
        //is the list empty?
        if ( head == nullptr) return;

        //Is there only one node?
        if (head->next == nullptr) {
            head = nullptr;
            return;
        }

        //Traverse the list looking for the last node
        Node* p = head;
        //Look-ahead strategy
        while ( (p->next)->next != nullptr) p = p->next;
        Node* lastNode = p->next;
        p->next = nullptr;
        delete lastNode;

    }
    //------------------------------------------------------------
    bool deleteNodeAfter(int dataValue) {
        Node* p = find(dataValue);
        if (p == nullptr) return false;

        //Removing next after last (none!)
        if (p->next == nullptr) return false;

        //General case, p has at least one neighbor
        Node* p1 = p->next;
        Node* p2 = p1->next;
        p->next = p2;
        delete p1;
        return true;

    }
};

