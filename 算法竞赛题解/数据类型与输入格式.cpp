#include<iostream>
#include<cmath>
using namespace std;
int main1() {
	//����int
	int a = 11111;//���1 ���
	cout << "���1���: 11111*11111= " << a *a << endl;

	int b = 111111;//����1 ��� ,�������int��λ�������ָ������
	cout << "����1���: 111111*111111= " << b * b << endl;

	int c = 111111111;//�Ÿ�1 ��� ͬ��
	//cout << "�Ÿ�1���: 111111111*111111111= " << c * c << endl;

	//������ float  ��ռλ������ ��λδ������� ,
	float d = 11111.0;
	cout << "�������1���: 11111*11111= " << d * d << endl;

	float e= 111111.0;
	cout << "��������1���: 111111*111111= " << e* e << endl;

	float f = 111111111.0;//���� ��"double"��"float"�ض� ,����ʱ��ܾã�
	cout << "�Ÿ�����1���: 111111111*111111111= " << f * f << endl;

	cout <<"sprt(-10) = " <<sqrt(-10) << endl;

	return{ 0 };
}