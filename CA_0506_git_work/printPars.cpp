#include "printPars.h"

void printPersonPars(Person p)
{
	cout << "ФИО: " << p.name << " " << p.secondName << " " << p.surname << "." << endl;
	cout << "Возраст: " << p.age << endl;
}
