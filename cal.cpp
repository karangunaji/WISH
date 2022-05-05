# include<iostream>

using namespace std;

int main(){

float a, b;
char operation ;

cout<<" Enter first numner :"<<endl;
cin>>a;

cout<<" Enter Operator( + , - , * , /)"<<endl;
cin>> operation;

cout<<"Enter second number :"<<endl;
cin>>b;


switch (operation)
{
case '+':
cout<<" Result = "<<a+b;

    break;
case '-':
cout<<"Resul = "<<a-b ;
break;

case '*':
cout<<" Results = "<<a*b ;
break;

case '/':
cout<<"Results = "<<a/b ;
break;

default:
cout<<"Envalid number";
    break;
}










    return 0;
}