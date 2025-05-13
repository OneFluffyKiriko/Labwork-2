// Labwork 2 Kiriko edition.cpp : This file contains the 'main' function. Program execution begins and ends there.

 //Exercise 1
/*Створити на C консольний застосунок, що реалізує обчислення згідно варіанту.
Вхідні дані ввести з клавіатури. Результати вивести на консоль. Використовувати
форматне виведення/введення даних. Введення даних та виведення результатів
роботи програми необхідно супроводжувати відповідними текстовими
повідомленнями.*/

/*Користувач задає два дійсних числа.Необхідно обчислити і вивести на екран :
-різницю 2 - го числа та 1 - го;
-середнє арифметичне двох чисел;
-суму чисел.*/

#include "main.h"
// Saving myself a headache (again)
using namespace std;
int task0()
{
   
    cout << "Starting Exercise 1\n";
    int val1;
    int val2;
    //taking inputs
    cout << "Enter value 1\n";
    cin >> val1;
    cout << "Enter value 2\n";
    cin >> val2;
    //calculating outputs and shoving them into the console
    float mean = val1 + val2;
    cout << "Value 2 minus Value 1 result: " << val2 - val1 << endl;
    cout << "Average of Value 1 and Value 2 result: " << mean / 2 << endl;
    cout << "Sum of Value 1 and Value 2: " << val1 + val2 << endl;
    return 0;
}