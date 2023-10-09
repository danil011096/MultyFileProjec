#include <iostream>
#include "Functions.h"
#include "Structures.hpp"
#include "Data.hpp"
#include "DataBase.hpp"
#include <string>

int main () {
	setlocale(LC_ALL, "Russian");
	//	int n;

		// использование данных из других файлов
		/*std::cout << sum(10, 5.5) << std::endl;
		range(3, 17);

		const int size = 5;
		int arr[size]{ 23, 23, 554, 654, 0 };
		print_arr(arr, size);

		std::cout << std::endl;

		Person p1;

		print_person(p1);

		std::cout << std::endl;

		std::cout << "Пи = " << _PI << std::endl;
		std::cout << "A = " << _A << std::endl;
		_A = 42;
		std::cout << "A = " << _A << std::endl;
		
		print_arr(_ARR, _SIZE);*/


		//Задание "База данных"
		short operation;
		do {
			std::cout << "Выберите действие: \n";
			std::cout << "1. Дабавить запись: \n";
			std::cout << "2. Удалить запись: \n";
			std::cout << "3. Вывести таблицу: \n";
			std::cout << "4. Завершить вывод: \n";
			std::cout << "Ввод -> ";
			std::cin >> operation;
			switch (operation) {
			case 1: {
				std:: string name;
				std::cout << "Введите наименование товара -> ";
				std::cin.ignore();
				std::getline(std::cin, name);
				int price;
				std::cout << "Введи стоимость товара -> ";
				std::cin >> price;
				int quantity;
				std::cout << "Введи остаток твара на складе -> ";
				std::cin >> quantity;
				db_app(name, price, quantity); 
				break;
			}
			case 2: {
				break;
			}
			case 3: 
				std::cout << "Наименование\tЦена\tОстаток на складе\n";
				print_full_db();
				break;
			default:
				std::cout << "Такой операции нет.\n";
			}
		} while (operation != 4);
		clear_db();
		std::cout << "Работа завершена!";


		return 0;
}