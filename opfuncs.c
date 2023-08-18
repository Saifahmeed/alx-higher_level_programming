#include "monty.h"
/**
*pushNode- adds to top of a stack
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/
void pushNode(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int value;

	arg = strtok(NULL, "\n ");
	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		freeAndExit(stack);
	}
	if (isANumber(arg) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		freeAndExit(stack);
	}
	value = atoi(arg);

	addStackHeader(stack, value);
}

/**
*pintNode- print first element in stack
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/
void pintNode(stack_t **stack, unsigned int line_number)
{
	printStackHead(stack, line_number);
}

/**
*printAllNodes- prints all stack
*@stack: pointer to pointer of stack
*@line_number: number to be added to stack
*
*Return: void
*/
void printAllNodes(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	printAll2(stack);
}
/**
*popNode- deletes stack top
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/

void popNode(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		freeAndExit(stack);
	}
	deleteStackHead(stack);
}
/**
*swapNodes- swaps 2 elements
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/

void swapNodes(stack_t **stack, unsigned int line_number)
{
	int store;
	stack_t *temp;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		freeAndExit(stack);
	}
	store = temp->n;
	temp->n = temp->next->n;
	temp->next->n = store;
}
