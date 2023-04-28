#include <iostream>
#include <Windows.h>
#include "Vector.h"

using namespace std;

/*
В контейнере типа vector хранится набор целых чисел. 
Создайте функторы для решения следующих задач:
■ Поиск минимального значения;
■ Поиск максимального значения;
■ Сортировка данных по убыванию;
■ Сортировка данных по возрастанию;
■ Увеличение значений в контейнере на заданную константу;
■ Уменьшение значений в контейнере на заданную константу;
■ Удаление элементов из контейнера равных искомому значению.
Не забывайте использовать алгоритмы там,где это необходимо.
*/

bool func(int i1, int i2) {
	return i1 < i2;
}

int main()
{
	Vector v{ 10 };
	v.print();
	//vector<int>vect{4,6,7,69,64,36,7,8};
	//sort(vect.begin(), vect.end(), func);
	//reverse(vect.begin(), vect.end());
	//for (int i : vect) {
	//	cout << i << " ";
	//}
	//cout << v.MaxElement() << " " << v.MinElement();
	//v.AscElem(5);
	v.Remove(4);
	v.print();

}
