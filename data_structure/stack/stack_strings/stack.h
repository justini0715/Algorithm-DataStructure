#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define MAX 100

typedef char *item; // 배열에 들어오는 값을 item으로 일괄 지정.

typedef struct
{
	item data[MAX];
	int top; // index 번호
} typeStack;

void init_stack(typeStack *stack);
int isEmpty(typeStack *stack);
int isFull(typeStack *stack);
void push(typeStack *stack, char *s);
item pop(typeStack *stack);
void print(typeStack *stack);
item top(typeStack *stack);
item bottom(typeStack *stack);