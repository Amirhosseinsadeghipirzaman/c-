
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int main()
{
   int a,n;
   int sum;
   sum=0;
   
    cout<<"Enter n :";
    cin>>n;
    for(int i=1 ; i<=n;i++)
    {
     cout<<"number"<<i<<":" ;
     cin>>a;
     sum+=a;
    }
    cout<<"sum:"<<sum;
    
    
    
 
 
 
 
    return 0;
}
