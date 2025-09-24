 #include "PaidLesson.h"

int main()
{
	/*Lesson a;
	Lesson b("C++", "Inheritance", "Create a base class");
	cout << "--------------------------------\n";
	a.showInfo();
	cout << endl;
	b.showInfo();
	cout << "--------------------------------\n";*/

	PaidLesson c;
	PaidLesson d("Database", "SELECT query", "Hospital", 200);
	cout << "--------------------------------\n";
	c.showInfo();
	d.showInfo();
	cout << "--------------------------------\n";
}

 