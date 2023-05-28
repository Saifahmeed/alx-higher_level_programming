#include "monty.h"
/**
*doNothing- nothing to do
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/
void doNothing(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
*addToStack- add element to stack
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/

void addToStack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		freeAndExit(stack);
	}
	temp->next->n += temp->n;
	*stack = temp;
	popNode(stack, line_number);
}
/**
*subtract- make sub opration
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/

void subtract(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		freeAndExit(stack);
	}
	temp->next->n -= temp->n;
	*stack = temp;
	popNode(stack, line_number);
}
/**
*divideStack- div d 1st 2 elemnts of a stack stores d result in d 2nd elemnt, del 1st
*@stack: pointer to pointer of double linked list
*@line_number: number to be added to stack
*
*Return: void
*/
void divideStack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		freeAndExit(stack);
	}
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		freeAndExit(stack);
	}
	temp->next->n /= temp->n;
	*stack = temp;
	popNode(stack, line_number);
}
/**
*multiply- multiply 2 elements
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/

void multiply(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		freeAndExit(stack);
	}
	temp->next->n *= temp->n;
	*stack = temp;
	popNode(stack, line_number);
}
