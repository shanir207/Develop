#include "Student.h"

class MAStudent __________________{
	bool wThesis;
public:
	_____________________
};

class PhdStudent _____________________ {
	int publications;
public:
	_____________________
};

class DirectPhdStudent : _____________________ {
	int year;
public:
	_____________________
};

void testQ2API(){ // ============ do not change ===============
	Student s('A', 20);
	s.print(cout);
	cout << "---" << endl;
	Student*s2 = new MAStudent('B', 21, false);
	s2->print(cout);
	cout << "---" << endl;
	Student* s3 = new MAStudent('C', 22, true);
	s3->print(cout);
	cout << "---" << endl;
	Student* s4 = new PhdStudent('D', 23, 2);
	s4->print(cout);
	cout << "---" << endl;
	Student* s5 = new DirectPhdStudent('E', 24, 2, 3);
	s5->print(cout);
	cout << "---" << endl;
	delete s2;
	delete s3;
	delete s4;
	delete s5;
	/* expected output:
	name: A
	age: 20
	---
	name: B
	age: 21
	without thesis
	---
	name: C
	age: 22
	with thesis
	---
	name: D
	age: 23
	publications: 2
	---
	name: E
	age: 24
	with thesis
	publications: 2
	year: 3
	---
	*/
}
