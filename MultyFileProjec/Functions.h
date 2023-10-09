#pragma once

#include <iostream>
//#include "data.hpp" // ошибка

extern int _A; // extern - модификация, показывающая, что данная переменная
// уже создана, но в другом файле


// Вычисление суммы двух чисел
double sum(double num1, double num2);
// Вывод целых чисел от А до В
void range(int A, int B);

// Вывод массиса в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
	std::cout << "...A = " << _A << std::endl;
}


