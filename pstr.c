#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - print a content of the stack_t stack as a string
 * @stack: stack supplied by main
 * @line_cnt: line counte for error messages
 *
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
