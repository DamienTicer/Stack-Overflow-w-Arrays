#include <iostream> //include the iostream library
using namespace std; //use the standard namespace

int stack[10], n = 10, top = -1; //declare and initialize an integer stack with size 10, a variable n set to 10 and a variable top set to -1 (initially the stack is empty)

void push(int val){ //define a function named push which takes an integer as an argument
  if (top>=n-1){ //if the top of the stack is greater than or equal to the size of the stack minus 1 (i.e., stack is full)
    cout << "Stack Overflow" << endl; //print "Stack Overflow" to the console and move to a new line
  }
  else{
    top++; //increment the top of the stack by 1
    stack[top] = val; //set the top element of the stack to the argument passed to the function
  }
};

int main() { //define the main function
  while (top < n-1){ //while the top of the stack is less than the size of the stack minus 1 (i.e., stack is not yet full)
    push(rand() % 11); //push a random integer between 0 and 10 (inclusive) onto the stack by calling the push function
    cout << stack[top]; //print the top element of the stack to the console
    if (top != 9){ //if the top of the stack is not equal to 9 (i.e., not the last element of the stack)
      cout << ", "; //print a comma and a space after the top element of the stack
    }
  }

  return 0; //exit the program with a return value of 0
}
