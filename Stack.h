#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "Node.h"
using namespace std;

class Stack
{
    public:
        Stack();
        pop();
        push(char c);
    private:
        Node *head;
};

#endif // STACK_H
