#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping- a:"<<a<<" b:"<<b<<endl;
    return 0;
}
