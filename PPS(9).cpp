#include <iostream>
using namespace std;
  int add (int a,int b);
  int main()
  {
    int x=5 ,y=10;
    cout<<"Sum:"<<add(x,y)<<endl;
    return 0;
  }
  int add(int a, int b){
    return a+ b;
  }
