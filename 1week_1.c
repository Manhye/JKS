#include <stdio.h>

void func(int a, int b) {
	int iDigit, iChkNum, iForVar;
	int iNumArr[4];									//1�� 10000������ ���̱� ������ �迭�� ũ�⸦ 4�� �Ͽ���.

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
	}												//b�� ���ڸ� ������ Ȯ���ϱ� ���� �ڵ��̴�.


	iChkNum = 10;
	for (iForVar = 0; iForVar < iDigit; iForVar++) {
		iNumArr[iForVar] = (b % iChkNum) / (iChkNum / 10);
		iChkNum = iChkNum * 10;
	}												//�迭�� �տ������� 1�� �ڸ���, 10�� �ڸ���... �� ������ �ش�.


	for (iForVar = 0; iForVar < iDigit; iForVar++) {
		printf("%d\n", iNumArr[iForVar] * a);
	}												//������ ������ �ڸ��� ��ŭ �� �ڸ����� �ش��ϴ� ������ ���� ���Ѵ�.


	printf("%d", a*b);								//a�� b�� �� ���� ���Ѵ�.
}													
int main() {
	func(215,4984);

	return 0;
}