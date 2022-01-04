
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
unsigned long fact(unsigned long n) {
   if ((n==0)||(n==1))       // n barabar 0 ya barabar 1
   return 1;
   else
   return n*fact(n-1);       // tabe bazgashti
}

int main()
{
    unsigned int x;    // input nabayad manfi bashad
    cout<<"Enter x:";
    cin>>x;
    cout<<fact(x);
    return 0;
}
