#include <iostream>

using namespace std;
int main()
{
    float a, b, c;
    int m = 54, k = 34, n = 2;

    // Введення загальної кількості макулатури, зібраної всіма загонами (m)
    cout << "The total amount of waste paper collected by all units (m): " << m << endl;

    // Введення різниці між другим і першим загонами (k)
    cout << "The differense between the second and first squads (k): " << k << endl;
 

    // Введення різниці між третім і першим загонами (n)
    cout << "The differense between the third and first squads (n): " << n << endl;
    

    // Знаходження кількості макулатури для кожного загону
    a = (m - k - n) / 3;  // Перший загін
    b = a + k;  // Другий загін
    c = a + n;   // Третій загін

    // Виведення результатів
    cout << "The first squad gathered " << a  << endl;
    cout << "The second squad gathered " << b  << endl;
    cout << "The third squad gathered " << c  << endl;
	
}
