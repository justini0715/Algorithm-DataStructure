#include "stack.h"

// 초기화
void init_stack(typeStack *stack)
{
	stack -> top = -1;
}

// 스택 비어있는지 확인
int isEmpty(typeStack *stack)
{
	return (stack -> top == -1);
}

// 스택 공간 여유 확인
int isFull(typeStack *stack)
{
	return (stack -> top == MAX - 1);
}

// 스택 쌓기 
void push(typeStack *stack, item s)
{
	if (isFull(stack))
		printf("stack is full!\n");
	else
	{
		stack -> top++;
		stack -> data[stack -> top] = s;
		printf("data pushed : %s\n", stack -> data[stack -> top]);
	}
}

// 스택 뺴기
item pop(typeStack *stack)
{
	if(isEmpty(stack))
	{
		printf("stack is empty\n");
		return (NULL);
	}
	else
	{
		item s;
		s = stack -> data[stack -> top];
		printf("data popped : %s\n", stack -> data[stack -> top--]);
		return (s);
	}
}

// 스택 천장
item top(typeStack *stack)
{
	item s_top;

	if (isFull(stack))
		printf("stack is full!\n");
	if(isEmpty(stack))
	{
		printf("stack is empty\n");
		return (NULL);
	}
	s_top = stack -> data[stack -> top];
	printf("top : %s\n", s_top);
	return (s_top);
}

// 스택 바닥
item bottom(typeStack *stack)
{
	item s_bot;

	if (isFull(stack))
		printf("stack is full!\n");
	if(isEmpty(stack))
	{
		printf("stack is empty\n");
		return (NULL);
	}
	s_bot = stack -> data[0];
	printf("bottom : %s\n", s_bot);
	return (s_bot);
}

// 스택 출력
void print(typeStack *stack)
{
	int i;

	i = 0;
	printf("current stack : ");
	while (i <= stack -> top)
		printf("%s ", stack -> data[i++]);
	printf("\n");
}
