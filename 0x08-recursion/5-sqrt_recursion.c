#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculatesnatural square root
 * @n : numberto calculate the square root
 * @i : iterate number
 * Return:  natural square root
 */

int _sqrt(int n , int i)
{
	int sqrt = i * i;
        if (sqrt > n)
        return (-i);
        if (sqrt == n)
        return (i);
        return (sqrt(n, i + 1));
}
