#include "stack.h"

int main(void)
{
	typeStack stack;
	item p;

	init_stack(&stack);
	// push
	push(&stack, "changwpa");
	push(&stack, "keynykim");
	push(&stack, "dojkoo");
	push(&stack, "hyejukim");
	push(&stack, "hisong");
	top(&stack);
	print(&stack);
	// pop
	pop(&stack);
	print(&stack);
	pop(&stack);
	print(&stack);
	p = pop(&stack);
	printf("popped : %s\n", p); // pop return
	print(&stack);
	print(&stack);
	top(&stack);
	bottom(&stack);
}