#include<iostream>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
    Stack s;

   
/*
  Exercise 2
 printf("Checking the parentheses in argv arguments\n");

*/

   int i=1;
   char t;

    int match=1;
     for(j=0;j<strlen(argv[i]);j++){
       switch(argv[i][j]){
        case '[' :
        case '(':
        case '{': s.push(argv[i][j]; break;
        case '}': t=s.pop();
                  if(t!='{') match=0;
                  break;
        case '[' :t=s.pop();
                  if(t!=']') match=0;
                    break;
        case '(' :t=s.pop();
                  if(t!=')') match=0;
                  break;
       }
       if(match==0) break;
      }
      if(match==0) cout<<"incorrect:mismatch";
      else if(!s.isEmpty()) cout<< "incorrect: too many open parenthesis"<<endl;
      else cout<<"correct"<<endl;

  }

  


   return 0;
}
