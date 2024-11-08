#include <iostream>

using namespace std;

class Student {
	string name;
	int age;
public:
	Student() {
		name = "Boryslav";
		age = 222;
	}

	Student(string name, int age) {
		this->name = name;
		this->age = age;
	}

	Student(const Student& obj) {
		this->name = obj.name;
		this->age = obj.age;
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

class Group {
	Student* students;
	int amountOfStudents;
public:
	Group() {
		amountOfStudents = 1;
		students = new Student[amountOfStudents];
	}

	~Group() {
		delete[] students;
		students = nullptr;
	}
};

int main()
{
	Student obj;
	obj.PrintInfoAboutStudent();
	obj.ChangeInfoAboutStudent();
	obj.PrintInfoAboutStudent();
}
