#include<stdio.h>
#define MAXITEMS 5
typedef struct{
	int top;
	int items[MAXITEMS];
}stack;
void push(stack*, int);
int pop(stack*);
int main()
{
	stack s;
	s.top=-1;
	
	push(&s,5);
	push(&s,6);
	push(&s,7);
	push(&s,9);
	push(&s,4);
	printf("%d",pop(&s));
    pop(&s);



}
void push(stack *s,int x)
{
	
	if (s->top== MAXITEMS -1){
		printf("%s","Stack Overflow");
		exit(1);
	
	}else {
		s->items[++(s->top)]=x;
	
	}
}
int pop(stack *s)
{

	if(s->top == -1){
		printf("%s","stack underflow");
		exit(1);
	
	}else {
		return (s->items[(s->top)--]);	
	}
}


