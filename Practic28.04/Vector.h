#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
В контейнере типа vector хранится набор целых чисел.
Создайте функторы для решения следующих задач:


? 
Не забывайте использовать алгоритмы там,где это необходимо.
*/

class Vector
{
	vector<int> vectInt;
public:
	Vector(int size){
		for (int i{ 0 }; i < size; i++) {
			vectInt.push_back(rand() % 10);
		}
	}
	//Сортировка данных по возрастанию;
	void SortAsc() {
		sort(vectInt.begin(), vectInt.end(), 
			[](const int i1, const int i2) { return i1 < i2; });
	}
	//Сортировка данных по убыванию;
	void SortDesc() {
		sort(vectInt.begin(), vectInt.end(), 
			[](const int i1, const int i2) {return i1 > i2; });
	}
	//Поиск максимального значения;
	int MaxElement() {
		vector<int>::iterator iter = max_element(vectInt.begin(), vectInt.end());
		return *iter;
	}
	//Поиск минимального значения;
	int MinElement() {
		vector<int>::iterator iter = min_element(vectInt.begin(), vectInt.end());
		return *iter;
	}
	//Увеличение значений в контейнере на заданную константу;
	void AscElem(const int i){
		transform(vectInt.begin(), vectInt.end(), vectInt.begin(),
			[i](int j) {return j+i; });
	}
	//Уменьшение значений в контейнере на заданную константу;
	void DescElem(const int i){
		transform(vectInt.begin(), vectInt.end(), vectInt.begin(),
			[i](int j) {return j - i; });
	}
	//Удаление элементов из контейнера равных искомому значению.
	void Remove(const int i) {
		vectInt.erase(remove_if(vectInt.begin(), vectInt.end(),
			[i](int j) { return j == i; }),
			vectInt.end());		
	}
	void print() {
		//for (int i : vectInt) {
		//	cout << i << " ";
		//}
		for_each(vectInt.begin(), vectInt.end(), [](const int i) { cout << i << " "; });
		cout << endl;
	}
};

