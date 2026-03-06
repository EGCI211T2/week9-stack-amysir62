
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
    bool isEmpty(){  return size==0; }
};

// [3,4,5]

void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            new_node->set_next(top);
            top=new_node;
            ++size;
   }
   else cout<<"No memory left"<<endl;
}

int Stack::pop(){
        NodePtr t=top;
        int value;
        value=t->get_value();
    // Left missing part for exercises
        delete t;
        return value;
	//be careful of the empty stack!!!
    }

Stack::Stack(){
      top=NULL;
      size=0;

    //initialize stack
  
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    
}

#endif
