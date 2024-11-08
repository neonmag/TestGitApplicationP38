#include <iostream>

using namespace std;

class Student {
	string name;
	int age;
	double mark;
public:
	Student() {
		name = "Boryslav";
		age = 222;
		mark = 11.2;
	}

	Student(string name, int age, double mark) {
		this->name = name;
		this->age = age;
		this->mark = mark;
	}

	Student(const Student& obj) {
		this->name = obj.name;
		this->age = obj.age;
		this->mark = obj.mark;
	}

	void PrintInfoAboutStudent() {
		cout << "Student`s name:" << this->name << endl;
		cout << "Student`s age:" << this->age << endl;
	}

	void ChangeInfoAboutStudent() {
		cout << "Enter a new name for student: ";
		cin >> this->name;
		cout << "Enter a new age for student: ";
		cin >> this->age;
	}

	string getName() {
		return this->name;
	}

	int getAge() {
		return this->age;
	}

	void setName(const string name) {
		this->name = name;
	}

	void setAge(const int age) {
		this->age = age;
	}
};

int main()
{
	Student obj;
	obj.PrintInfoAboutStudent();
	obj.ChangeInfoAboutStudent();
	obj.PrintInfoAboutStudent();
}
