#include <iostream>
#include <ctime>
using namespace std;

class Point 
{
//private:
    int x;
    int y;

public:
    Point() // construct by default
    {
        cout << "Construct Point\n";
        x = y = 0;
    }

    Point(int x1, int y1) // Construct by 2 param
    {
        cout << "Construct Point by 2 param\n";
        x = x1;
        y = y1;
    }

    void Init()
    {
        x = rand() % 10;
        y = rand() % 10;
    }

    void Init(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    void Output()
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
};

class Point3D : public Point {
private:
    int z;

public:
    Point3D() : Point() 
    {
        cout << "Construct Point3D\n";
        z = 0;
    }

    Point3D(int x1, int y1, int z1) : Point(x1, y1)
    {
        cout << "Construct Point3D by 3 param\n";
        z = z1;
    }

    void Init(int x1, int y1, int z1)
    {
        Point::Init(x1, y1);
        z = z1;
    }

    void Output()
    {
        Point::Output();
        cout << "Z: " << z << endl; 
    }
};

int main()
{
    srand(static_cast<unsigned>(time(0)));

    Point obj1;
    obj1.Output();

    Point obj2(10, 20);
    obj2.Output();

    Point3D obj3;
    obj3.Output();

    Point3D obj4(10, 20, 30);
    obj4.Output();

    system("pause");
    return 0;
}
