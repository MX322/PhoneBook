#include <iostream>
using namespace std;

class PhoneBook
{
private:
	char* name;
	char* surname;
	char* patronymic;

	int home_number;
	int work_number;
	int mobile_number;

public:
	PhoneBook() = default;

	PhoneBook(const char* name, const char* surname, const char* patronymic, int home_number, int work_number, int mobile_number)
	{
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);

		this->surname = new char[strlen(surname) + 1];
		strcpy_s(this->surname, strlen(surname) + 1, surname);

		this->patronymic = new char[strlen(patronymic) + 1];
		strcpy_s(this->patronymic, strlen(patronymic) + 1, patronymic);

		this->home_number = home_number;
		this->work_number = work_number;
		this->mobile_number = mobile_number;
	}

	void AddSubscriber(const char* name, const char* surname, const char* patronymic, int home_number, int work_number, int mobile_number);

	void ShowSubscriber()
	{
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Patronymic: " << patronymic << endl;
		cout << "Home number: " << home_number << endl;
		cout << "Work number: " << work_number << endl;
		cout << "Mobile number: " << mobile_number << endl;
	}
	
	~PhoneBook()
	{
		delete[] name;
		delete[] surname;
		delete[] patronymic;
	}
};


void PhoneBook::AddSubscriber(const char* name, const char* surname, const char* patronymic, int home_number, int work_number, int mobile_number)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);

	this->patronymic = new char[strlen(patronymic) + 1];
	strcpy_s(this->patronymic, strlen(patronymic) + 1, patronymic);

	this->home_number = home_number;
	this->work_number = work_number;
	this->mobile_number = mobile_number;
}




int main()
{
	PhoneBook Alex("Alex", "Semchenko", "Sergeyovich", 678732250, 982424349, 635342534);
	PhoneBook Sergey("Sergey", "Polinchenko", "Dmitrovich", 984325135, 635436812, 636725167);
	PhoneBook Oleg("Oleg", "Savchenko", "Vladimirovich", 686426134, 682543169, 635534164);
	PhoneBook Roman;

	Roman.AddSubscriber("Roman", "Anglichanin", "Nikolayevich", 684325214, 684536269, 635431532);
	Roman.ShowSubscriber();

}