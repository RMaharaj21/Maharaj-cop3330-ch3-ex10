/******************************************************************************
Write a program that takes an operation followed by two operands and
outputs the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation and use an
if-statement to figure out which operation the user wants, for example,
if (operation=="+"). Read the operands into variables of type double.
Implement this for operations called +, –, *, /, plus, minus, mul, and div
with their obvious meanings.
*******************************************************************************/
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Maharaj
 */
 
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter an operation folowed by two operands\n";
    cout<<"Example: + 100 3.14\n";
    cout<<"Enter: ";
    
    /*Varible Decleration*/
    double num1, num2;
    string operand;
    
    cin >> operand >> num1 >> num2;
    
    cout<<"\n";
    
    double answer;
    
    /*Determines based of the sign what operation needs to be done*/
    if(operand == "+"){
        answer = num1 + num2;
        cout<< num1 << " " << operand << " " << num2 << " = " << answer;
    }
    if(operand == "-"){
        answer = num1 - num2;
        cout<< num1 << " " << operand << " " << num2 << " = " << answer;
    }
    if(operand == "*"){
        answer = num1 * num2;
        cout<< num1 << " " << operand << " " << num2 << " = " << answer;
    }
    if(operand == "/"){
        answer = num1 / num2;
        cout<< num1 << " " << operand << " " << num2 << " = " << answer;
    }

    return 0;
}
