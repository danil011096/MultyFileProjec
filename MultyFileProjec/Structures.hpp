#pragma once

#include <iostream>



struct Person {
	std::string name = "noname";
	int age = 18;
	std::string job = "programer";
	int salary = 500000;
};

//Вывод объекта срутку
void print_person(const Person& P);
