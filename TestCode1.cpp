#include <iostream>
#include <cmath>
using namespace std;

struct xy {
    float x;
    float y;
};

struct xyz {
    float x;
    float y;
    float z;
};

class Ariphm_oper {
private:
    float result;
public:
    void add(float x, float y) {
        result = x + y;
        cout << "Result is: " << result << endl;
    }

    void subtract(float x, float y) {
        result = x - y;
        cout << "Result is: " << result << endl;
    }

    void multiply(float x, float y) {
        result = x * y;
        cout << "Result is: " << result << endl;
    }

    void divide(float x, float y) {
        if (y == 0) {
            cout << "Division is impossible!" << endl;
        }
        else {
            result = x / y;
            cout << "Result is: " << result << endl;
        }
    }
};

const float pi = 3.1415926535;

class Trigonom_oper {
private:
    float result;
public:
    void sine(float x) {
        result = sin(x);
        cout << "Result is: " << result << endl;
    }

    void cosine(float x) {
        result = cos(x);
        cout << "Result is: " << result << endl;
    }

    void tangent(float x) {
        result = tan(x);
        cout << "Result is: " << result << endl;
    }

    void cotangent(float x) {
        result = tan(pi / 2 - x);
        cout << "Result is: " << result << endl;
    }
};

class Coord_oper {
private:
    xy result_xy;
    xyz result_xyz;
public:
    void add_coord_xy(xy c1, xy c2) {
        result_xy.x = c1.x + c2.x;
        result_xy.y = c1.y + c2.y;
        cout << "Result is: " << result_xy.x << " " << result_xy.y << endl;
    }

    void add_coord_xyz(xyz c1, xyz c2) {
        result_xyz.x = c1.x + c2.x;
        result_xyz.y = c1.y + c2.y;
        result_xyz.z = c1.z + c2.z;
        cout << "Result is: " << result_xyz.x << " " << result_xyz.y << " " << result_xyz.z << endl;
    }

    void subtract_coord_xy(xy c1, xy c2) {
        result_xy.x = c1.x - c2.x;
        result_xy.y = c1.y - c2.y;
        cout << "Result is: " << result_xy.x << " " << result_xy.y << endl;
    }

    void subtract_coord_xyz(xyz c1, xyz c2) {
        result_xyz.x = c1.x - c2.x;
        result_xyz.y = c1.y - c2.y;
        result_xyz.z = c1.z - c2.z;
        cout << "Result is: " << result_xyz.x << " " << result_xyz.y << " " << result_xyz.z << endl;
    }
};

int main() {
    Ariphm_oper a;
    Trigonom_oper t;
    Coord_oper c;
    float x = 13;
    float y = 15;
    cout << "Ariphmetic operations\n" << endl;
    a.add(x, y);
    a.subtract(x, y);
    a.multiply(x, y);
    a.divide(x, y);
    cout << endl;
    float s = 30;
    cout << "Trigonometric operations\n" << endl;
    t.sine(s);
    t.cosine(s);
    t.tangent(s);
    t.cotangent(s);
    cout << endl;
    xy c1 = { 1, 2 };
    xy c2 = { 3, 4 };
    cout << "Coordinate operations\n" << endl;
    c.add_coord_xy(c1, c2);
    c.subtract_coord_xy(c1, c2);
    xyz C1 = { 1, 2, 3 };
    xyz C2 = { 4, 5, 6 };
    c.add_coord_xyz(C1, C2);
    c.subtract_coord_xyz(C1, C2);
    return 0;
}
