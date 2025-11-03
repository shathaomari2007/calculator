#include <iostream>
using namespace std ;
int main()
{
int num1 , num2 , res ;
cout <<"enter the first number : ";
cin >> num1;
cout <<"enter the secend number : ";
cin >>num2;
char op;
cout <<"enter the op : ";
cin >> op;
if(op=='+')
{
    res = num1+num2;
    cout<<"the resulte is : "<<res;
}
else if(op=='-')
{
res = num1-num2;
// cout <<"the result is : "<<res;
}
else if(op=='*') 
{
    res =num1*num2;
    // cout <<"the result is : "<<res;
}
else if(op=='/')
{
res = num1/num2;
// cout <<"the result is : "<<res;
}
else
 {
    res = num1%num2;
    // cout <<"the result is : "<<res;
 }
  cout<<"the resulte is : "<<res;
}
