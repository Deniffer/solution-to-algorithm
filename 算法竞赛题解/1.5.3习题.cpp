//习题 1-1 平均数（average） function get_avg
//习题 1-2 温度转换（temperature）
//习题 1-3 连续和(sum) 
//习题 1-4 正弦和余弦（sin and cos）
//习题 1-5 打折(discount)
//习题 1-6 三角形（triangle）
#include<iostream>
#include <iomanip>
#include<cmath >
using namespace std;//这里为了方便直接使用命名空间规范，建议以std::来代替
double get_avg() {
	double a, b, c;
	cin >> a >> b >> c;
	double d = (a + b + c) / 3;
	cout << "(a+b+c)/3 = " << fixed << setprecision(3) << d << endl;//如何控制输出位数
	return { 0 };
}
double temperature_exchange() {
	float a,b;
	cin >> a;
	b = 5 * (a - 32) / 9;
	cout <<a<< "对应的摄氏温度是： " << fixed << setprecision(3) << b << endl;
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
	const double PI{ 3.1415926 };//acos(-1) 为了方便直接定义pi值 ，也可以用代替 
	cout << "sin(n) = " << sin(PI*(n/180)) << "     cos(n) =  " << cos(PI * (n/180)) << endl;
	return 0;
}
double discount(int n) {
	const double cloth_prize = 90;
	const double discount = 0.85;
	double total_fare=cloth_prize*n;//如果使用int型则精度会下降， 该警告c26451 未解决
	if (total_fare >= 300) {
		total_fare = total_fare * discount;
	}
	cout << "衣服总费用为：" << total_fare << endl;
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
//所有的函数都在main中被调用
int main() {
	//get_avg();
	//temperature_exchange();
	//get_sum(100);
	//discount(1);
	//judge_trangle(1, 1, 2);
	//sin_and_cos(90);
	return{ 0 };
}