#include <iostream>
#include <fstream>
using namespace std;

class Point{
public:
	char color;
	virtual char dim() const = 0;
	virtual void save(ostream& out) const{
		___________________
	}
	virtual void load(ifstream& in){
		______________________
	}
};

class Point1D : public Point{
public:
	int x;
	____________________
};

class Point2D : public Point{
public:
	int x,y;
	_____________________
};

class Point3D : public Point{
public:
	int x, y,z;
	______________________
};

void savePoint(const Point& p,ofstream& out){
	___________________
}

Point* loadPoint(ifstream& in){
	____________________
}

void testQ3API(){ // ============ do not change ===============
	Point3D p;
	p.color = 'r';
	p.x = 3;
	p.y = 4;
	p.z = 5;
	ofstream out("p3d.dat", ios::binary);
	savePoint(p, out);
	out.close();

	ifstream in("p3d.dat", ios::binary);
	Point* pd = loadPoint(in);
	in.close();
	Point3D * p3d = dynamic_cast<Point3D*>(pd);
	if (p3d && p3d->color == 'r' && p3d->x == 3 && p3d->y == 4 && p3d->z == 5)
		cout << "great! :)" << endl;
	else
		cout << "not great! :(" << endl;	

	delete p3d;
}
