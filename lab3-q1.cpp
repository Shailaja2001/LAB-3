// Library
#include<iostream>
//Including keyword or namespace
using namespace std;
//Writing main function
int main()
{
//Declaring variables 
int p= 222;
float q= 123.456;
bool b= true;
char g= '12';
double a= 4654312.6543;
//Printing the size of variables
cout << "Size of int= " << sizeof(p) <<" bytes" << endl;
cout << "Size of float= " << sizeof(q) <<" bytes" << endl;
cout << "Size of bool= " << sizeof(b) <<" byte" << endl;
cout << "Size of char= " << sizeof(g) <<" byte" << endl;
cout << "Size of double= " << sizeof(a) <<" bytes" << endl;
return 0;

}
