//Library
#include<iostream>
//including keyword or namespace
using namespace std;
//The main function
int main(){
//Defining variables
int a, b;
//Assign values
a = 25;
b = 10;
//arithmatic part
float addition;
float subtraction;
float multiplication;
int division;
float divisionwithdecimal;
int remainder;
addition = a+b;
subtraction = a-b;
multiplication = a*b;
division = a/b;
divisionwithdecimal = float(a)/float(b);
remainder = a%b;
//Printing things
cout << "The sum of 25 and 10is " << addition << endl;
cout << "The difference between 25 and 10is " << subtraction << endl;
cout << "The product of 25 and 10is " << multiplication << endl;
cout << "The quotient when 25 is divided by 10 is " << division << endl;
cout << "The result when 25 is divided by 10 is" << divisionwithdecimal << endl;
cout << "The remainder when 25 is divided by 10 is " << remainder << endl;
return 0;
}
