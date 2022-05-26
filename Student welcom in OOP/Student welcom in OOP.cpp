/*Реалізуйте клас «Студент». Необхідно зберігати в змінних-членах класу: ПІБ, дату народження, контактний телефон, місто, країну, назву навчального закладу, місто та 
країну (де знаходиться навчальний заклад), номер групи. Реалізуйте функції-члени класу для введення даних, виведення даних.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {		//клас студент 
private:
	string pib;
	string birthday;
	string phone;		//змінні для даних
	string city;
	string country;
	string study;
	string adressstudy;
	string klassstudy;
public:
	void setInfo() {					//сеттер для введення інфи 
		cout << "Enter Info" << endl;
		cout << "Enter Name of student : ";
		getline(cin,this->pib);
		cout << "Birthday : ";
		getline(cin, this->birthday);
		cout << "Number phone : ";
		getline(cin, this->phone);
		cout << "Enter your country :";
		getline(cin, this->country);
		cout << "Enter your city :";
		getline(cin, this->city);
		cout << "Enter Educational institution : ";
		getline(cin, this->study);
		cout << "Enter adress Education institution :";
		getline(cin, this->adressstudy);
		cout << "Enter your klass in Education institution : ";
		getline(cin, this->klassstudy);
		cout << endl;
	}
	void getInfo() {			//Геттер для вивдення Інфи 
		cout << "Student "<< this->pib << endl;
		cout << "Born :" << this->birthday << endl;
		cout << "Number phone : " << this->phone << endl;
		cout << "From " << this->country << ", " << this->city << " city" << endl;
		cout << "Studied at the "<< this->study<<", adress: "<< this->adressstudy<<", in "<< this->klassstudy<< " klass"<<endl;
	}
};
int main()
{
	Student BorisJonsonuk;	//створюємо обєкт класа 
	BorisJonsonuk.setInfo();	//викликаємо по черзі сеттери та геттери.
	BorisJonsonuk.getInfo();

}

