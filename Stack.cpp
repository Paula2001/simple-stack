#include "Stack.h"

Stack::Stack()
{
    head = NULL;
}
Stack::push(char c){
    Node *newnode = new Node(c);
        newnode->next = head ;
        head = newnode;

}
Stack::pop(){
    if(head == NULL){
        cout<< "NULL";
    }else{
        cout << head->value << " " ;
        head = head->next ;
    }
}
