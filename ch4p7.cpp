/*
    Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as 
    either digits or spelled out.

    Exercise 5: Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math
    operations — add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter
    three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and
    '+', the program output should be The sum of 35.6 and 24.1 is 59.7. I
*/

#include "std_lib_facilities.h"

int main(){

    String operation;
    String op1Str, op2Str;
    double operand1, operand2;

    cout << "Enter an operation and two operands (in that order): ";
    cin >> operation >> op1Str >> op2Str;

    if(op1Str == "1" || op1Str == "one" || op1Str == "One"){
        operand1 = 1;
    } else if(op1Str == "2" || op1Str == "two" || op1Str == "Two"){
        operand1 = 2;
    } else if(op1Str == "3" || op1Str == "three" || op1Str == "Three"){
        operand1 = 3;
    } else if(op1Str == "4" || op1Str == "four" || op1Str == "Four"){
        operand1 = 4;
    } else if(op1Str == "5" || op1Str == "five" || op1Str == "Five"){
        operand1 = 5;
    } else if(op1Str == "6" || op1Str == "six" || op1Str == "Six"){
        operand1 = 6;
    } else if(op1Str == "7" || op1Str == "seven" || op1Str == "Seven"){
        operand1 = 7;
    } else if(op1Str == "8" || op1Str == "eight" || op1Str == "Eight"){
        operand1 = 8;
    } else if(op1Str == "9" || op1Str == "nine" || op1Str == "Nine"){
        operand1 = 9;
    } else if(op1Str == "0" || op1Str == "zero" || op1Str == "Zero"){
        operand1 = 0;
    } else {
        cout << "Uh-oh! Invalid input; enter numbers 0-9 only, please!";
    }

    if(op2Str == "1" || op2Str == "one" || op2Str == "One"){
        operand2 = 1;
    } else if(op2Str == "2" || op2Str == "two" || op2Str == "Two"){
        operand2 = 2;
    } else if(op2Str == "3" || op2Str == "three" || op2Str == "Three"){
        operand2 = 3;
    } else if(op2Str == "4" || op2Str == "four" || op2Str == "Four"){
        operand2 = 4;
    } else if(op2Str == "5" || op2Str == "five" || op2Str == "Five"){
        operand2 = 5;
    } else if(op2Str == "6" || op2Str == "six" || op2Str == "Six"){
        operand2 = 6;
    } else if(op2Str == "7" || op2Str == "seven" || op2Str == "Seven"){
        operand2 = 7;
    } else if(op2Str == "8" || op2Str == "eight" || op2Str == "Eight"){
        operand2 = 8;
    } else if(op2Str == "9" || op2Str == "nine" || op2Str == "Nine"){
        operand2 = 9;
    } else if(op2Str == "0" || op2Str == "zero" || op2Str == "Zero"){
        operand2 = 0;
    } else {
        cout << "Uh-oh! Invalid input; enter numbers 0-9 only, please!\n";
    }

    double result;

    if(operation == "+" || operation == "plus"){
        result = operand1 + operand2;
    } else if(operation == "-" || operation == "minus"){
        result = operand1 - operand2;
    } else if(operation == "*" || operation == "mul"){
        result = operand1 * operand2;
    } else if(operation == "/" || operation == "div"){
        result = operand1 / operand2;
    }

    cout << op1Str << " " << operation << " " << op2Str << " is " << result;

    return 0;
}