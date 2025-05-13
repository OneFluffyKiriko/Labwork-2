/*3. Створити на C консольний застосунок, що реалізує обчислення згідно варіанту.
Вхідні дані ввести з клавіатури. Результати вивести на консоль. Використовувати
форматне виведення/введення даних. Введення даних та виведення результатів
роботи програми необхідно супроводжувати відповідними текстовими
повідомленнями.*/
/*Variant 7
7. Задані значення цілих змінних a,b. Обчислити значення функції:sqrt(a-pow(b,2))+sqrt(a*b) */

#include "main.h"
using namespace std;
int task2() {
	cout << "Starting Exercise 3\n";
	//calling in variables
	float inpa;
	float inpb;
	//getting user input
	cout << "Input the value of A: ";
	cout << "Input the value of B: ";
	cin >> inpa;
	cin >> inpb;
	//Now doing the math
	//Breaks if you use the wrong values, so uhm like... dont do that...
	float test = sqrt(inpa - pow(inpb, 2)) + sqrt(inpa * inpb);
	cout << "Output of the function: " << test << endl;

	
	return 0;
}