#include <iostream>
#include <iomanip>

int main()
{
    std::cout << setw(10) << showpos << +4 << endl;
    std::cout << setw(15) << internal << -67.09 << endl;
    std::cout << setw(10) << right << +235 << endl;
    std::cout << noshowpos << 8 << "a1" << endl;
    std::cout << fixed << setprecision(2) << -121.00 << endl;
    std::cout << showpos << +1 << showpos << +24 << endl;
}
