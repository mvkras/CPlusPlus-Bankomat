#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_CTYPE, "rus");
	int money;
	int balance;
	int nominal_0 = 5000, nominal_1 = 2000, nominal_2 = 1000, nominal_3 = 500, nominal_4 = 200, nominal_5 = 100, nominal_6 = 50; //Какие купюры имеются в банкомате
	int nal_0 = 6, nal_1 = 12, nal_2 = 20, nal_3 = 15, nal_4 = 35, nal_5 = 75, nal_6 = 150; //Количество купюр
	balance = nominal_0 * nal_0 + nominal_1 * nal_1 + nominal_2 * nal_2 + nominal_3 * nal_3 + nominal_4 * nal_4 + nominal_5 * nal_5 + nominal_6 * nal_6; //Узнаем Баланс
	cout << "Денег в банкомате: \n ";
	cout << "Введите сумму: \n ";
	cin >> money;
	
}