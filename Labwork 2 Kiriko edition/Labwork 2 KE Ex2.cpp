/*Створити на C консольний застосунок, що реалізує обчислення виразу згідно
варіанту. Результати вивести на консоль. Використовувати форматне виведення
даних. Виведення результатів роботи програми необхідно супроводжувати
відповідними текстовими повідомленнями.*/

/*Обчислити і вивести на екран значення функції y=((ca)/(a+b))+((bc)/(c+a)) де задані сталі
величини a=-50, b=4, c=9.*/
#include "main.h"

// Saving myself a headache (again pt2)
using namespace std;
int task1(){
	//calling in variables
	cout << "Starting Exercise 2\n";
	//making my variables
	float a = -50;
	float b = 4;
	float c = 9;
	float y = ((c * a) / (a + b)) + ((b * c) / (c + a));

	cout << "Calculation of our pretty little function: " << y << endl;


	return 0;
}
