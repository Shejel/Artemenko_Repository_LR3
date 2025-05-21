#include <iostream>
using namespace std;

void prov(int& number1)
{
	while ((!(cin >> number1) || (cin.peek() != '\n')))
	{
		cin.clear();
		while (cin.get() != '\n');
		{
			cout << "Введите корректное число!" << endl;
		}
	}
}

void prov(float& number1)
{
	while ((!(cin >> number1) || (cin.peek() != '\n')))
	{
		cin.clear();
		while (cin.get() != '\n');
		{
			cout << "Введите корректное число!" << endl;
		}
	}
}

void task1(float& A)
{
    cout<<"Введите A: ";
        prov(A);
        //main();
}

void task2(float& B)
{
    cout<<"Введите B: ";
        prov(B);
        //main();

}

int main()
{
    setlocale(LC_ALL, "rus");
    int answer;
    float A;
    float B;
    cout<<"1) Ввести число A"<<endl;;
    cout<<"2) Ввести число B"<<endl;
    cout<<"3)Сумма\n4)Разность"<<endl;
    prov(answer);
    switch(answer)
    {
    case 1:
        task1(A);
        main();
    case 2:
        task2(B);
        main();
    case 3:
        task3(A, B);
        main();
    case 4:
        task4(A, B);
        main();
    default:
        cout<<"Введите подходящее число: "<<endl;
    }
}