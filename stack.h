#ifndef STACK_H
#define STACK_H
#define SIZE 100

struct Stack {
  int a[SIZE];
  int sp;
};


void initStack(struct Stack* s);
void push(struct Stack* s, int e);
void pop(struct Stack* s);
int top(struct Stack* s);

#endif


