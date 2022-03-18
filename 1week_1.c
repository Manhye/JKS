#include <stdio.h>

void func(int a, int b) {
	int iDigit, iChkNum, iForVar;
	int iNumArr[4];									//1과 10000사이의 수이기 떄문에 배열의 크기를 4로 하였다.

	iDigit = 1;
	iChkNum = 10;

	while (1) {
		if ((b / iChkNum) > 0) {
			iDigit++;
			iChkNum = 10 * iChkNum;
		}
		else {
			break;
		}
	}												//b가 몇자리 수인지 확인하기 위한 코드이다.


	iChkNum = 10;
	for (iForVar = 0; iForVar < iDigit; iForVar++) {
		iNumArr[iForVar] = (b % iChkNum) / (iChkNum / 10);
		iChkNum = iChkNum * 10;
	}												//배열의 앞에서부터 1의 자리수, 10의 자리수... 를 저장해 준다.


	for (iForVar = 0; iForVar < iDigit; iForVar++) {
		printf("%d\n", iNumArr[iForVar] * a);
	}												//위에서 조사한 자리수 만큼 각 자리수에 해당하는 수와의 곱을 구한다.


	printf("%d", a*b);								//a와 b의 곱 또한 구한다.
}													
int main() {
	func(215,4984);

	return 0;
}