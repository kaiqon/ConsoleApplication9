#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class Zhukov
{
	char gender{}; int age{}; int stipendiya{};
public:
	int id{}; string fio{}; string gruppa{};
	void Gender(int Gender)
	{
		gender = Gender;
	}
	void Age(int Age)
	{
		age = Age;
	}
	void Stipendiya(int Stipendiya)
	{
		stipendiya = Stipendiya;
	}
	int next_age()
	{
		return age + 1;
	}
	int P_stipendiya(int s)
	{
		return stipendiya + s;
	}
	void Show()
		{
		cout << id << " " << fio << " " << gender << " " << age << " " << stipendiya << " " << gruppa << endl;
		}
};
int main()
{
	//setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Zhukov Nikolay, Darya, Radion;
	Nikolay.id = {1}; // можно без фигурных скобок
	Nikolay.fio = { "Жуков Николай" };
	//cout << Nikolay.id << " " << Nikolay.fio << endl;
	Nikolay.Age(17);
	Nikolay.Gender('М');
	Nikolay.Stipendiya(799);
	Nikolay.Show();
	Darya.id = { 2 };
	Darya.fio = { "Павлова Дарья" };
	Darya.Age(20);
	Darya.Gender('Ж');
	Darya.Stipendiya(1199);
	Darya.Show();
	Radion.id = 3;
	Radion.fio = "Радионов Радион";
	Radion.Age(17);
	Radion.Gender('М');
	Radion.Stipendiya(0);
	Radion.Show();
	cout << Nikolay.P_stipendiya(400)<<endl;
	return 0;
}