#include "tasks.h"

/*	Task X. Non-Unique Number Digits [������������ ����� �����]
*
*	���� ����� �����. ���������� ����������,
*	���� �� � ����� ������������� �����.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ����� ����� ���� long long.
*
*	������ �������� ������ [output]
*	������� ������ ������������ ��������� �������� - ��������� ������� �������.
*
*	[ input 1]: 54321
*	[output 1]: false
*
*	[ input 2]: 11111
*	[output 2]: true
*
*	[ input 3]: 121
*	[output 3]: true
*
*	[ input 4]: -12345
*	[output 4]: false
*
*	[ input 5]: 0
*	[output 5]: false
*/

bool taskX(long long number) {
	number = number < 0 ? -number : number;

	while (number > 9) {
		int digit = number % 10;
		number /= 10;
		int n = number;
		while (n > 0) {
			if (n % 10 == digit) {
				return true;
			}
			n /= 10;
		}
	}

	return false;
}