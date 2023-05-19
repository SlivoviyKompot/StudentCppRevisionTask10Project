﻿#include "tasks.h"

/*	Task 03. The Double Max [вторая максимальная цифра]
*
*	Дано целое число. Необходимо определить вторую по величине цифру данного числа, 
*	т.е. цифру, которая будет наибольшим, если из числа удалить наибольшую цифру.
*	Если нет такой цифры, то должно быть возвращено число -1.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено число, которое является решение задачи.
*
*	[ input 1]: 12345
*	[output 1]: 4
*
*	[ input 2]: -56789
*	[output 2]: 8
*
*	[ input 3]: 11111
*	[output 3]: -1
*
*	[ input 4]: 0
*	[output 4]: -1
*/

int task03(long long number) {
	int max = -1;
	int sub_max = -1;

	if (number < 0) {
		number = -number;
	}

	while (number) {
		int d = number % 10;
		
		if (d > max) {
			if (max > sub_max) {
				sub_max = max;
			}

			max = d;
		}
		else if(d > sub_max && d < max) {
			sub_max = d;
		}

		number /= 10;
	}

	return sub_max;
}