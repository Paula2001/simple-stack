#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack *st = new Stack();
    st->push('A');
    st->push('B');
    st->push('c');
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    return 0;
}
