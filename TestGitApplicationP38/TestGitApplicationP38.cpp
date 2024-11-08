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
};

int main()
{
	Student obj;
	obj.PrintInfoAboutStudent();
}
