#include <iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
    }
int main() {
    int a;
    int b;
    
    cout<<"enter the numbers";
    cin>>a;
    cin>>b;
    int q=sum(a,b);
    cout<<q;
    
}