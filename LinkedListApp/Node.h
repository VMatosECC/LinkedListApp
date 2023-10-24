#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct Node
{
public:
    //Data members
    int      data;
    Node*    next;

    //Constructor
    Node(int dataValue = 0, Node* nextValue = nullptr) {
        data = dataValue;
        next = nextValue;
    }

    //User-defined Methods
    string toString() {
        stringstream sout;
        sout << this << " Node [Data: " << data << ", Next: " << next << "]";
        return sout.str();
    }

};

