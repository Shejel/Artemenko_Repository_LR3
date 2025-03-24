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
    cout<<"1) Ввести число A"<<endl;;
    cout<<"2) Ввести число B"<<endl;
    cout<<"3)Сумма\n4)Разность"<<endl;
    prov(answer);
    switch(answer)
    {
    case 1:
        cout<<"Введите A: ";
        prov(A);
        main();
    case 2:
        cout<<"Введите B: ";
        prov(B);
        main();
    case 3:
        cout<<"Сумма равна - "<<A+B<<endl;
        main();
    case 4:
        if(A>B)
        {cout<<"Разность равна - "<<A-B<<endl;}
        else;
        cout<<"Разность равна - "<<B-A<<endl;
        main();
    default:
        cout<<"Введите подходящее число: "<<endl;
    }
}