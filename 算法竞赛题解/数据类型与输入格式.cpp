#include<iostream>
#include<cmath>
using namespace std;
int main1() {
	//整数int
	int a = 11111;//五个1 相乘
	cout << "五个1相乘: 11111*11111= " << a *a << endl;

	int b = 111111;//六个1 相乘 ,结果超出int型位数，出现负数结果
	cout << "六个1相乘: 111111*111111= " << b * b << endl;

	int c = 111111111;//九个1 相乘 同上
	//cout << "九个1相乘: 111111111*111111111= " << c * c << endl;

	//浮点数 float  所占位数更多 六位未超出结果 ,
	float d = 11111.0;
	cout << "五个浮点1相乘: 11111*11111= " << d * d << endl;

	float e= 111111.0;
	cout << "六个浮点1相乘: 111111*111111= " << e* e << endl;

	float f = 111111111.0;//报错 从"double"到"float"截断 ,计算时间很久！
	cout << "九个浮点1相乘: 111111111*111111111= " << f * f << endl;

	cout <<"sprt(-10) = " <<sqrt(-10) << endl;

	return{ 0 };
}