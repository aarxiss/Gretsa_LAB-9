#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Triangle {
    Point A, B, C;

    // Функція для обчислення площі трикутника за формулою Герона
    double area() const {
        // Відстані між точками
        double a = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
        double b = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
        double c = sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));

        // Напівпериметр
        double s = (a + b + c) / 2;

        //формула Герона
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    setlocale(LC_ALL, "uk_UA");
    // Приклад трикутника з координатами вершин
    Triangle t = { {0, 1}, {4, 5}, {0, 3} };

  
    cout << "Площа трикутника: " << t.area() << endl;

    return 0;
}
