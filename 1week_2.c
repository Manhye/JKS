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
	}									//��� ���� a�� b�� ������ �� �Ѵ� ������ �������� ���� �ּڰ��� ���Ѵ�.

	return a * b / iMul;				//������ ���� ���� �� ���� ������ ������ ������� ������ ���Ѵ�.
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
	}									//a�� ������ �����ؼ� 1�� ���̸鼭 a�� b�� ������ �� ���ÿ� 0�� �Ǵ� ���� ã�´�.

	for (iForVar = iFac; iForVar > 0; iForVar--) {
		if (iFac%iForVar == 0) {
			iResult++;
		}
	}									//�ִ������� ����� ������ ���ϸ� ������� ������ �� �� �ִ�.

	return iResult;
}

int main() {
	int a, b;
	a = 18;
	b = 12;
	printf("�� ���� �� ������ ����� ������ %d\n", com_mul(a, b));
	printf("�� ���� ������� ������ %d\n", com_fac(a, b));

	return 0;
}