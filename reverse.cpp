
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int main()
{
    int a,n,s;
    cin>>n;
    s=0;
    while(n>0)
    {
        a=n%10;
        s=s*10+a;
        n=n/10;
        
    }
    cout<<s;
    return 0;
}
