#include <iostream>
using namespace std;
#include "stack.h"
#include <cstring>

int main(int argc, char *argv[]) {
  Stack s;
  int match;
  char c;
  int i,j;
  for(j=1;j<argc;j++){
    match=1;
  
  for(i=0;i<strlen(argv[j]);i++){
    switch(argv[j][i]){
      case '[':
      case '{':
       
          s.push(argv[j][i]);
          break;
      case ']':
           c=s.pop();
      if(c!='[') match=0;
          break;
      case '}':
          c=s.pop();
      if(c!='{') match=0;
          break;
    } //if it's open bracket { [ -->push
    //if it's close bracket } ]-->pop & check
  }
  
  if(match==0) cout<<"Parenthesis does not match"<<endl;
  else if('['<']'&& '{'<'}')
    cout<<"Too many open bracket"<<endl;
    else if('['>']'&& '{'>'}')
      cout<<"Too many close bracket"<<endl;
      else cout<<"Parenthesis match"<<endl;
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