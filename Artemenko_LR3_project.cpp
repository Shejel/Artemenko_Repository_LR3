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

int main()
{
    setlocale(LC_ALL, "rus");
    int answer;
    float A;
    float B;
    cout<<"Введите число A: ";
    prov(A);
    cout<<"Введите число B: ";
    prov(B);
    cout<<"Что вас интересует?\n1)Сумма\n2)Разность"<<endl;
    prov(answer);
    switch(answer)
    {
    case 1:
        cout<<"Сумма равна - "<<A+B<<endl;
        main();
    case 2:
        if(A>B)
        {cout<<"Разность равна - "<<A-B<<endl;}
        else;
        cout<<"Разность равна - "<<B-A<<endl;
        main();
    default:
        cout<<"Введите подходящее число: "<<endl;
    }
}