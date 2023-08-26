#include "monty.h"

/**
 * pall - print a stacks
 * @stack: stack supplied by main
 * @line_cnt: ammounts of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
