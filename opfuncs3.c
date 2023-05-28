#include "monty.h"
/**
*getMod- mod 2 elements
*@stack: pointer to pointer of stack
*@line_number: number of line
*
*Return: void
*/
void getMod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
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
*moveFirstToLast - move head to the last positon
*@stack: pointer to pointer of stack
*@line_number: number of line
*
*Return: void
*/
void moveFirstToLast(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	moveFirstToLastStack(stack);
}
/**
*myPutChar- prints first letter
*@stack: pointer to pointer of stack
*@line_number: number to be added
*
*Return: void
*/
void myPutChar(stack_t **stack, unsigned int line_number)
{
	printHeaderData(stack, line_number);
}
