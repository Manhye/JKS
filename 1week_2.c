#include <stdio.h>
int com_mul(int a, int b) {
	int iMul = 1;
	while (1) {
		if ((iMul%a == 0) && (iMul%b == 0)) {
			break;
		}
		else {
			iMul++;
		}
	}									//어떠한 수를 a와 b로 나눴을 때 둘다 나누어 떨어지는 값중 최솟값을 구한다.

	return a * b / iMul;				//위에서 구한 값을 두 수의 곱에서 나누면 공배수의 개수를 구한다.
}

int com_fac(int a, int b) {
	int iFac, iResult, iForVar;
	iFac = a;
	iResult = 0;

	while (1) {
		if ((b%iFac == 0)&&(a%iFac == 0)) {
			break;
		}
		else {
			iFac--;
		}
	}									//a의 값부터 시작해서 1씩 줄이면서 a와 b를 나눴을 때 동시에 0이 되는 수를 찾는다.

	for (iForVar = iFac; iForVar > 0; iForVar--) {
		if (iFac%iForVar == 0) {
			iResult++;
		}
	}									//최대공약수의 약수의 개수를 구하면 공약수의 개수를 알 수 있다.

	return iResult;
}

int main() {
	int a, b;
	a = 18;
	b = 12;
	printf("두 수의 곱 이하의 공배수 개수는 %d\n", com_mul(a, b));
	printf("두 수의 공약수의 개수는 %d\n", com_fac(a, b));

	return 0;
}