#include <iostream>
#include <Windows.h>

using namespace std;


// ���������� � ������������� ���������� ���������� extern
extern double conversionFactor = 9.0 / 5.0;

int main() 
{
    setlocale(LC_ALL, "Rus");
    // auto-���������� ��� ��������������� ����������� ����
    auto celsius = 0.0;

    cout << "������� ����������� � �������� �������: ";
    cin >> celsius;

    // register-���������� ��� �������� �������������� ����������
    register double intermediate = celsius * conversionFactor;

    // static-���������� ��� �������� ���������� ��������, ����������� ���� ��������
    static double fahrenheit = intermediate + 32;

    cout << "����������� � �������� ����������: " << fahrenheit << endl;

    return 0;
}


