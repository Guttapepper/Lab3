#include <iostream>
#include <cmath> 

using namespace std;

void task1();

void task2();

void task3();

float x, y, r;

int main()
{
    int menu;
    cin >> menu;
    switch (menu)
    {
        case 1 : task1(); break;

        case 2 : task2(); break;

        case 3 : task3(); break;

        default : cout << "\nUnknown operation!"; 

    }
    return 0;

}

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
    //float x, y, r; 
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

void task3()
{
    
    // Обчислення площі
    float sectorArea = M_PI * r * r / 4;
    float triangleArea = r * r / 2;
    float totalArea = sectorArea + triangleArea;

    // Обчислення периметра
    float arcLength = M_PI * r / 2;
    float totalPerimeter = arcLength + 2 * r;

    // Виведення результатів
    cout << "Area of the figure: " << totalArea << endl;
    cout << "Perimeter of the figure: " << totalPerimeter << endl;
    
}





