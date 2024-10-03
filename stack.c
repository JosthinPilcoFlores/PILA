#include "stack.h"
void initStack(struct Stack* s){
  s->sp = 0 ;
}

void push(struct Stack* s, int e){
  s->a[s->sp] = e;
  s->sp++;

}

void pop(struct Stack* s){
  s->sp--;
}

int top(struct Stack* s){
  return s->a[s->sp - 1];
}

int size(struct Stack* s){
  return s->sp;
}
