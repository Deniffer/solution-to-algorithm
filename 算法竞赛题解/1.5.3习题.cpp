//ϰ�� 1-1 ƽ������average�� function get_avg
//ϰ�� 1-2 �¶�ת����temperature��
//ϰ�� 1-3 ������(sum) 
//ϰ�� 1-4 ���Һ����ң�sin and cos��
//ϰ�� 1-5 ����(discount)
//ϰ�� 1-6 �����Σ�triangle��
#include<iostream>
#include <iomanip>
#include<cmath >
using namespace std;//����Ϊ�˷���ֱ��ʹ�������ռ�淶��������std::������
double get_avg() {
	double a, b, c;
	cin >> a >> b >> c;
	double d = (a + b + c) / 3;
	cout << "(a+b+c)/3 = " << fixed << setprecision(3) << d << endl;//��ο������λ��
	return { 0 };
}
double temperature_exchange() {
	float a,b;
	cin >> a;
	b = 5 * (a - 32) / 9;
	cout <<a<< "��Ӧ�������¶��ǣ� " << fixed << setprecision(3) << b << endl;
	return{ 0 };
}
int get_sum(int n) {
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum += i;
	}
	cout<<sum<<endl;
	return sum;
}
double sin_and_cos(int n) {
	const double PI{ 3.1415926 };//acos(-1) Ϊ�˷���ֱ�Ӷ���piֵ ��Ҳ�����ô��� 
	cout << "sin(n) = " << sin(PI*(n/180)) << "     cos(n) =  " << cos(PI * (n/180)) << endl;
	return 0;
}
double discount(int n) {
	const double cloth_prize = 90;
	const double discount = 0.85;
	double total_fare=cloth_prize*n;//���ʹ��int���򾫶Ȼ��½��� �þ���c26451 δ���
	if (total_fare >= 300) {
		total_fare = total_fare * discount;
	}
	cout << "�·��ܷ���Ϊ��" << total_fare << endl;
	return total_fare;
}
void judge_trangle(int a, int b, int c) {
	if (a + b >c&& a - b < c) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

}
bool judge_year(int n) {
	if (n%400==0)
	{
		cout << "Yes" << endl;
		return 1;
	}
	else if (n%4==0&&n%100!=0)
	{
		cout << "Yes" << endl;
		return 1;
	}
	else {
		cout << "No" << endl;
		return 0;
	}
}
//���еĺ�������main�б�����
int main() {
	//get_avg();
	//temperature_exchange();
	//get_sum(100);
	//discount(1);
	//judge_trangle(1, 1, 2);
	//sin_and_cos(90);
	return{ 0 };
}