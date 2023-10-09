#pragma once

#include <iostream>
//#include "data.hpp" // ������

extern int _A; // extern - �����������, ������������, ��� ������ ����������
// ��� �������, �� � ������ �����


// ���������� ����� ���� �����
double sum(double num1, double num2);
// ����� ����� ����� �� � �� �
void range(int A, int B);

// ����� ������� � �������
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
	std::cout << "...A = " << _A << std::endl;
}


