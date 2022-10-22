#include <iostream>
#include <cmath>

using namespace std;

double area() {

	setlocale(LC_ALL, "Russian");
	while (true) {
		double room, length, height, height_door = 0, width_door = 0;
		cout << "Введите длину стены (в м.):" << endl;
		cin >> length;
		if (cin.fail()) {
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(1000, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Ошибка! Вы ввели некорректное значение. Попробуйте сно-ва.\n";
			continue;
		}

		cout << "Введите высоту стены (в м.):" << endl;
		cin >> height;
		if (cin.fail()) {
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(1000, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Ошибка! Вы ввели некорректное значение. Попробуйте снова.\n";
			continue;
		}

		string door;
		cout << "Есть ли дверь/окно? (Введите Yes or No)" << endl;
		cin >> door;
		if ((door == "Yes") || (door == "yes") || (door == "YES") || (door == "Да") || (door == "да")) {
			cout << "Введите высоту двери/окна (в м.):" << endl;
			cin >> height_door;
			cout << "Введите ширину двери/окна (в м.):" << endl;
			cin >> width_door;
		}
		room = ((length * height) - (height_door * width_door));

		return room;
	}
}

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	while (true) {
		double area1, price, length_wallpapers, width_wallpapers, number, num - ber_wallpapers, total_amount;
		area1 = area();

		cout << "Введите длину рулона обоев (в м.) Если не уверены, введите 0:" << endl;
		cin >> length_wallpapers;
		if (cin.fail()) {
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(1000, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Ошибка! Вы ввели некорректное значение. Попробуйте снова.\n";
			continue;
		}
		while (length_wallpapers == 0) {
			int def_length = 10;
			length_wallpapers = def_length;
			cout << "Стандартная длина - 10" << endl;
		}

		cout << "Введите ширину рулона (в м.) Если не уверены, введите 0:" << endl;
		cin >> width_wallpapers;
		if (cin.fail()) {
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(1000, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Ошибка! Вы ввели некорректное значение. Попробуйте снова.\n";
			continue;
		}
		while (width_wallpapers == 0) {
			double def_width = 1.06;
			width_wallpapers = def_width;
			cout << "Стандартная ширина - 1.06" << endl;
		}

		cout << "Введите цену одного рулона (в руб.) Если не уверены, введите 0:" << endl;
		cin >> price;
		if (cin.fail()) {
			cin.clear(); // то возвращаем cin в 'обычный' режим работы
			cin.ignore(1000, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			cout << "Ошибка! Вы ввели некорректное значение. Попробуйте сно-ва.\n";
			continue;
		}
		while (price == 0) {
			int def_price = 980;
			price = def_price;
			cout << "Стандартная цена - 980" << endl;
		}

		number = area1 / (length_wallpapers * width_wallpapers);
		number_wallpapers = ceil(number);
		total_amount = price * number_wallpapers;
		cout << "Количество рулонов: " << number_wallpapers << " шт." << endl;
		cout << "Общая стоимость: " << total_amount << " рублей" << endl;
		return 0;
	}
}