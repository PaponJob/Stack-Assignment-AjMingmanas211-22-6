#include <iostream>
using namespace std;
#include "stack.h"
#include <cstring>

int main(int argc, char *argv[]) {

  int match;
  char c;
  int i,j;
  for(j=1;j<argc;j++){
    match=1;
  Stack s;
  for(i=0;i<strlen(argv[j]);i++){
    switch(argv[j][i]){
      case '[':
      case '{':

          s.push(argv[j][i]);
          break;
      case ']':
           c=s.pop();
        if(c==0) match=2;
          else if(c!='[') match=0;
          break;
      case '}':
          c=s.pop();
        if(c==0) match=2; //too many close
       else if(c!='{') match=0;
          break;
    } //if it's open bracket { [ -->push
    //if it's close bracket } ]-->pop & check
  }
  
    if(match==2) cout<<"Too many close parenthesis"<<endl;
      else if(match==0) cout<<"Parenthesis does not match"<<endl;
        else if(s.getSize()>0) cout<<"Too many open parenthesis"<<endl;
          else if(match==1 ) cout<<"Parenthesis match"<<endl;
  }
    /*s.push(5);
  s.push(1);
  s.push(7);
  s.push(6);
  s.pop();//6
  s.pop();//7
  s.push(3);
  s.push(4);
 s.pop();//4
  s.pop();//3
  s.pop();//1
    s.pop();//5
    s.pop();
    s.pop();*/
}