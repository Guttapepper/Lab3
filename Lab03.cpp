#include <iostream>
#include <cmath> 

using namespace std;

void task1()

{
        /*
    Task 1 if21:
    Дано цілочисельні координати точки на площині. Якщо точка збігається з
    початком координат, то вивести 0. Якщо точка не збігається з початком координат,
    але лежить на осі OX або OY, то вивести відповідно 1 або 2. Якщо точка не лежить
    на координатних осях, то вивести 3. 
    */

    cout << "\n________Task 1 (if 21)________" << endl << endl;

    // Declaration of coordinates
    int x, y;

    // Input for X and Y coordinates
    cout << "Enter X coordinate: ";
    cin >> x;
    cout << "Enter Y coordinate: ";
    cin >> y;

    // Check the position of the point
    if (x == 0 && y == 0) 
    {
        // If the point is at the origin
        cout << "Point is at the origin. Output: 0" << endl << endl;
    } else if (x == 0) 
    {
        // If the point is on the Y-axis
        cout << "Point is on the Y-axis. Output: 2" << endl << endl;
    } else if (y == 0) 
    {
        // If the point is on the X-axis
        cout << "Point is on the X-axis. Output: 1" << endl << endl;
    } 
    else 
    {
        // If the point is not on any axis
        cout << "Point is not on the axes. Output: 3" << endl << endl;
    } 
    

}

void task2()
{
    //Task 2-3 (35) Таблиця 2 Геометричні фігури

    cout << "\n________Task 2 (35)________" << endl << endl;
    // Declaration:
    float x, y, r; 
    cout << "Enter the radius r: ";
    cin >> r;
    
    // Перевірка на валідність введених даних
    if (r <= 0) {
        cout << "Radius must be positive!" << endl;
    }

    // Введення координат точки
    cout << "Enter point coordinates x and y: ";
    cin >> x >> y;

    // Умова для перевірки частини кола (четвертина кола у 4-й чверті)
    if (x >= 0 && y <= 0 && (x * x + y * y <= r * r)) {
        cout << "The point is inside the circle." << endl;
    }
    // Умова для трикутника
    else if (x >= 0 && y <= 0 && y >= -x) {
        cout << "The point is inside the triangle." << endl;
    }
    // Якщо точка не належить жодній із областей
    else {
        cout << "The point is outside of the specified areas." << endl;
    }

}

int main()
{
    task2();

    

     return 0;

}