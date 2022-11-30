//Лабораторне завдання 10. Виконала Тютюн Анастасія Вікторівна, ФІТ 1-5. Варіант 29

#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include <locale.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

void Ex_1_1_var_14() {
	//1. Радіус Місяця 1740 км. Обчислити площу поверхні 𝑆=4𝜋𝑟2 та об’єм планет 𝑉=4𝜋𝑟3/3.
	cout << "Exercise 1.1" << endl;
	int r = 1740;
	double area = 4 * M_PI * pow(r, 2);
	double volume = (4 * M_PI * pow(r, 3) / 3);
	cout << "Area of the Moon: " << area << endl;
	cout << "Volume of the Moon: " << volume << endl;
}

void Ex_1_2_var_14() {
	//2. Обчислити об’єм та площу бічної поверхні куба, якщо відоме ребро.
	cout << "Exercise 1.2" << endl;
	float len = 0;
	cout << "Enter the edge of your cube: " << endl;
	cin >> len;
	double volume = pow(len, 3);
	double side_area = 6 * (pow(len, 2));
	cout << "Cube's volume: " << volume << endl;
	cout << "Cube's side area: " << side_area << endl;
}


void Ex_2_var_4() {
	//Трикутник задано координатами вершин 𝐴(0;0),𝐵(𝑖;𝑖−1),𝐶(−𝑖;𝑖+1), де і – номер варіанта. Обчислити висоту до сторони а та бісектрису кута В.
	cout << "Exercise 2" << endl;
	cout << "Find the height to the side a and the bisection of the angle B in a triangle. The coordinates of triangle's vertexes are A(0;0),B(4;3),C(-4;5). BC = a, AC = b, AB = c." << endl;
	int sides[3][2] = {{0,0}, {4, 3}, {-4,5}};
	double c = sqrt(pow((sides[0][0] - sides[1][0]), 2) + pow((sides[0][1] - sides[1][1]), 2));
	double a = sqrt(pow((sides[1][0] - sides[2][0]), 2) + pow((sides[1][1] - sides[2][1]), 2));
	double b = sqrt(pow((sides[0][0] - sides[2][0]), 2) + pow((sides[0][1] - sides[2][1]), 2));
	
	double p = (a + b + c) / 2;
	double geron = sqrt(p * (p - a) * (p - b) * (p - c));
	double height = (2 * geron) / a;
	
	double cos_b = (pow(c, 2) + pow(a, 2) - pow(b, 2)) / (2 * a * c);
	double bis_b = (2 * a * b * (cos_b / 2)) / (a + b);

	cout << "The height to the side a is:  " << height << endl;
	cout << "The bisection of the angle B is:  " << bis_b << endl;
}


void Ex_3_var_9() {
	//Написати програму, яка обчислює вирази за двома формулами: 𝑧1=(cos𝛼−cos𝛽)^2−(sin𝛼−sin𝛽)^2; 𝑧2=−4(sin2𝛼−𝛽)^2∙cos(𝛼+𝛽)
	cout << "Exercise 3" << endl;
	float a = 0;
	float b = 0;
	cout << "Enter the values of a and b" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	
	double z_1 = pow((cos(a) - cos(b)), 2) - pow((sin(a) - sin(b)), 2);
	double z_2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
	cout << "z_1 = " << z_1 << endl;
	cout << "z_2 = " << z_2 << endl;
}


void Ex_4_var_29() {
	// Скласти програму обчислення значень функції y=F(x) відповідно до завдань, зазначених у таблиці. 
	//𝑦=(𝑐𝑜𝑠𝑥)^3+|𝑎|; 𝑥=𝑐^𝑏; 𝑏=|𝑎|+√(𝑎+𝑝^2)
	//𝑎=−4;𝑝=3
	cout << "Exercise 4" << endl;
	const int a = -4;
	const int p = 3;
	float c = 0;
	cout << "Enter argument c for the equation:  " << endl;
	cin >> c;
	double b = abs(a) + sqrt(a + pow(p, 2));
	double x = pow(c, b);
	double y = pow(cos(x), 3) + abs(a);
	cout << "Result: " << y << endl;
}


void Ex_5_var_9() {
	//Використовуючи відповідні компоненти створити додаток для розв’язування наступної задачі: знайти значення виразу врахувавши область визначення.
	cout << "Exercise 5" << endl;
	cout << "Enter two values x and y" << endl;
	cout << "Consider that the expression cos(x) - cos(y) has to be non-negative, and y cannot be zero" << endl;
	float x = 0;
	float y = 0;
	cout << "Value x:   ";
	cin >> x;
	cout << "Value y:   ";
	cin >> y;
 
	if (y != 0 && (cos(x) - cos(y)) >= 0) {
		double result = sqrt((cos(x) - cos(y)) * pow(sin((x - y) / 2 * y), 2));
		cout << result << endl;
	}
	else {
		cout << "You entered arguments that go out of function's domain" << endl ;
	}
}


int main()
{
	int task_num = 0;
	cout << "Which exercise would you like to look at?: ";
	cin >> task_num;
	

	switch (task_num)   {

	case 1:
		Ex_1_1_var_14();
		cout << "\n\n" << endl;
		Ex_1_2_var_14();
		break;

	case 2:
		Ex_2_var_4();
		break;

	case 3:
		Ex_3_var_9();
		break;

	case 4:
		Ex_4_var_29();
		break;

	case 5:
		Ex_5_var_9();
		break;

	default:
		cout << "Çàäà÷³ ç òàêèì íîìåðîì íå ³ñíóº" << endl;
		break;
	}


	return 0;
}

