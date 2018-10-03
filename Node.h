#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node
{
    public:
        Node();
        Node(char val);
        Node *next ;
        char value ;
};

#endif // NODE_H
