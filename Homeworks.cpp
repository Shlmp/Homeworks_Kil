#include <iostream>

using namespace std;

void tarea1();
int main()
{
	int homework;

	cout << "Bienvenido a mis tareas\n Cual tarea desea ver?";
	cin >> homework;

	switch (homework)
	{
	case 1:
		tarea1();
		break;
	default:
		break;
	}
}

void tarea1()
{
	//void
	int option =0;
	//case1
	float number =0;
	int i =0;
	//case2
	int add = 0;
	int firstnum=0, wholenum=0;
	//case3
	int numero =0, wholenumber=0;
	//case4
	int num[3] = { 0, 0, 0 };
	int order[3] = { 0, 0, 0 };
	int x=0;
	//case5
	int min=0, max=0;

	cout << "Cual opcion desea ver?" << endl;
	cin >> option;

	switch (option)
	{
	case 1:
	
		do
		{
			cout << endl << "Dame un numero" << endl;
			cin >> number;

			if (number < 0)
			{
				cout << "El numero " << number << " es negativo" << endl;
			}
			else if (number > 0)
			{
				cout << "El numero " << number << " es positivo" << endl;
			}
			else
			{
				cout << "El numero es 0" << endl;
			}
			i++;
		} while (i < 5);
		break;
	case 2:

		cout << "Asigne un numero de 2 digitos" << endl;
		cin >> wholenum;

		if (wholenum > 9 && wholenum < 100)
		{
			while (wholenum != 0)
			{
				firstnum = wholenum % 10;
				wholenum /= 10;
				add += firstnum;
			}
		}
		cout << "la suma es " << add << endl;
		break;
	case 3:


		cout << "Asigne un numero de 2 digitos" << endl;
		cin >> wholenumber;

		if (wholenumber > 9 && wholenumber < 100)
		{
			while (wholenumber != 0)
			{
				wholenumber /= 10;
			}
		}

		if (wholenumber = wholenumber % 2)
			cout << "Hay un numero par " << endl;
		else if (numero = numero % 2)
			cout << "Hay un numero par " << endl;
		else if (wholenumber == wholenumber % 2 && numero == numero % 2)
			cout << "Ambos numeros son par " << endl;
		break;
	case 4:

		do
		{
			cout << "Ingrese un numero que desea ordenar" << endl;
			cin >> num[x];
			x++;
		} while (x < 3);

		if (num[0] > num[1] && num[0] > num[2])
		{
			cout << num[0] << " es el mayor";
		}


		else if (num[1] > num[0] && num[1] > num[2])
		{
			cout << num[1] << " es el mayor";
		}


		else if (num[2] > num[0] && num[2] > num[1])
		{
			cout << num[2] << " es el mayor";
		}
		break;
	case 5:

		cout << "Cuales es el parametro menor?" << endl;
		cin >> min;

		cout << "Cuales es el parametro mayor?" << endl;
		cin >> max;

		for (min; min < max; min++)
		{
			if (min % 2 == 0)
			{
				cout << min << endl;
			}

		}
		break;
	default:
		break;
	}
}
