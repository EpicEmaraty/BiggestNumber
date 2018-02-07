//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int a1;
int a2;
int biggest;

cout<<"Please enter a whole number:\n";

  cin >> a1;
  cout<<"Please enter another whole number:\n";
  cin >> a2;
if (a1>a2) {

biggest = a1; }

else {

biggest = a2; }


  cout<<"Of those two numbers, the biggest is: "<< biggest <<"" ;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
