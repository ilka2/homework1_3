#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Address
    {
        string city;
        string street;
        int numberOfHouse;
        int numberOfFlat;
        int index;


        void InfoAddress()
        {
            cout << "Город: " << city << endl;
            cout << "Улица: " << street << endl;
            cout << "Номер дома: " << numberOfHouse << endl;
            cout << "Номер квартиры: " << numberOfFlat << endl;
            cout << "Индекс: " << index << endl;
            cout << "\n";
        }

        void NewAddress()
        {
            cout << "Введите город: ";
            cin >> city;
            
            cout << "Введите улицу: ";
            cin >> street;

            cout << "Введите номер дома: ";
            cin >> numberOfHouse;

            cout << "Введите номер квартиры: ";
            cin >> numberOfFlat;

            cout << "Введите индекс: ";
            cin >> index;

            cout << endl;

            InfoAddress();

            cout << "\n\n";
        }
    };

    Address address1;
    Address address2;

    address1.NewAddress();
    address2.NewAddress();
}