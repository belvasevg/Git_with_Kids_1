#include "printPars.h"

void printPersonFIO(Person p)
{
	cout << "ФИО: " << p.name << " " << p.secondName << " " << p.surname << "." << endl;
}

void printPersonAge(Person p)
{
	cout << "Возраст: " << p.age << endl;
}

void printPersonWeight(Person p)
{
	cout << "Вес: " << p.weight << endl;
}
