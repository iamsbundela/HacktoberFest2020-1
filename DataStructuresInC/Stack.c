#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

// For checking If Stack is Empty or not
int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
// For checking if Stack is Full or not   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}
// For checking the peek(top) element
int peek() {
   return stack[top];
}

// For using Popping an element
int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

// For pushing some value
int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {
   // push items on to the stack 
   push(3);
   push(9);
   push(1);
   push(12);
   push(5);
   push(17);

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}