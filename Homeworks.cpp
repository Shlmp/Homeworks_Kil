#include <iostream>
#include<cstdlib>

using namespace std;

void tarea1();
void RockPaperScissors();
int main()
{
	int homework;

	cout << "Bienvenido a mis tareas\n Cual tarea desea ver?" << endl << "Tarea 1" << endl << "Rock, Paper & Scissors" << endl;
	cin >> homework;

	switch (homework)
	{
	case 1:
		tarea1();
		break;
	case 2:
		RockPaperScissors();
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

void RockPaperScissors()
{
	int counterPlayer = 0;
	int counterEnemy = 0;
	srand(time(NULL));
	do
	{
		system("cls");
		int enemy = (rand() % 3) + 1;
		int option = 0;

		cout << enemy << endl;
		if (enemy == 1)
		{
			cout << "   The cpu chose rock!" << endl;
		}
		else if (enemy == 2)
		{
			cout << "   The cpu chose paper!" << endl;
		}
		else if (enemy == 3)
		{
			cout << "   The cpu chose scissors!" << endl;
		}

		cout << endl;

		cout << "Player: " << counterPlayer << "      " << "CPU: " << counterEnemy << endl;
		cout << "Choose your option" << endl << "1 - rock" << endl << "2 - paper" << endl << "3 - scissors" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			if (option < enemy)
			{
				cout << "You lose" << endl;
				counterEnemy += 1;
			}
			else if (option == enemy)
			{
				cout << "You tied" << endl;
			}
			else if (option == 1 && enemy == 3)
			{
				cout << "You win" << endl;
				counterPlayer += 1;
			}
			break;
		case 2:

			break;
		case 3:

			break;
		default:
			break;
		}
		system("pause");
	} while (counterEnemy < 2 && counterPlayer < 2);
	cout << endl << "           Final Score" << endl << "Player: " << counterPlayer << "      " << "CPU: " << counterEnemy << endl;
}