#include <iostream>

using namespace std;
int main()
{
    float a, b, c;
    int m = 54, k = 34, n = 2;

    // �������� �������� ������� ����������, ������ ���� �������� (m)
    cout << "The total amount of waste paper collected by all units (m): " << m << endl;

    // �������� ������ �� ������ � ������ �������� (k)
    cout << "The differense between the second and first squads (k): " << k << endl;
 

    // �������� ������ �� ����� � ������ �������� (n)
    cout << "The differense between the third and first squads (n): " << n << endl;
    

    // ����������� ������� ���������� ��� ������� ������
    a = (m - k - n) / 3;  // ������ ����
    b = a + k;  // ������ ����
    c = a + n;   // ����� ����

    // ��������� ����������
    cout << "The first squad gathered " << a  << endl;
    cout << "The second squad gathered " << b  << endl;
    cout << "The third squad gathered " << c  << endl;
	
}
