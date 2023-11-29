#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter your marks:"<<endl;
cin>>marks;
if(marks<25){
    cout<<"Your grade is F";
}
else if(marks>=25 && marks<=44) {
    cout<<"Your grade is E";
}
else if(marks>=45 && marks<=49){
    cout<<"Your grade is D";
}
else if(marks>=50 && marks<=59){
    cout<<"Your grade is C";
}
else if(marks>=60 && marks<=79){
    cout<<"Your grade is B";
}
else if(marks>=80 && marks<=100){
    cout<<"Your grade is A";
}
else{
    cout<<"Please enter a number !";
}
}

