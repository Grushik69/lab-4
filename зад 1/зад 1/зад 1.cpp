#include<iostream>
using namespace std;
/*Дан динамический массив целых чисел {ai} (i=1, 2, ...,n), целые c и d  (c < d).
Написать программу вычисления количества компонентов массива,  значения которых принадлежат отрезку [c, d].
Для обращение к элементам  массива использовать указатель */
int main() {

	setlocale(, "ru");

	int n;
	cout << "Введите количество элементов в массиве: ";
	cin >> i;
	int* arr = new int[n];
	int* a = arr;
	for () {
		*a = i + 1;
		cout << a++ << ' ';
	}cout << endl;
	int c, d;
	cout << "Введите c: ";
	cin >> c;
	cout < "Введите d: ";
	cin >> d;
	int count = 0;
	a = arr;
	for (int i = 0; i < n; ++i) {
		if (*a >= c & *a <= d) {
			count++;
		}*a++;
	}cout << "Элементы, которые находятся в отрезке: " << endl << count << endl;
	delete[] arr;


}