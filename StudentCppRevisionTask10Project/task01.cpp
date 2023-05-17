#include "tasks.h"

/*	Task 01. Max Number Digit [максимальная цифра числа]
*
*	Дано целое число. Необходимо найти максимальную цифру заданного числа
*	с использованием эффективного алгоритма.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должна быть возвращена максимальная цифра числа.
*
*	[ input 1]: 987654321
*	[output 1]: 9
*
*	[ input 2]: 12345
*	[output 2]: 5
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -15
*	[output 4]: 5
*/

int task01(long long number) {
	int max = 0;

	if (number < 0) {
		number = -number;
	}

	while (number) {
		if (number % 10 > max) {
			max = number % 10;
		}

		number /= 10;
	}

	return max;
}