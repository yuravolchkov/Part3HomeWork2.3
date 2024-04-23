// Task3.Struct_arry.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct AddressBook
{
    // Все переменные объявлены как "строка", так как
    // с номерами домов, индексами и квартирами не будут проводиться 
    // математические операции (+, -, *, / и прочее)
    std::string PostIndex;
    std::string CityLabel;
    std::string StreetLabel;
    std::string HouseNumber;
    std::string FlatNumber;
};

void DataEntry(AddressBook& Page_DE)
{
    std::cout << "Город: ";
    std::cin >> Page_DE.CityLabel;
    std::cout << "Улица: ";
    std::cin >> Page_DE.StreetLabel;
    std::cout << "Номер дома: ";
    std::cin >> Page_DE.HouseNumber;
    std::cout << "Номер квартиры: ";
    std::cin >> Page_DE.FlatNumber;
    std::cout << "Индекс: ";
    std::cin >> Page_DE.PostIndex;
    std::cout << "\n";
}

 void DataPrint(AddressBook& Page_DP)
 {
     std::cout << "Город: " << Page_DP.CityLabel;
     std::cout << "\nУлица: " << Page_DP.StreetLabel;
     std::cout << "\nНомер дома: " << Page_DP.HouseNumber;
     std::cout << "\nНомер квартиры: " << Page_DP.FlatNumber;
     std::cout << "\nИндекс: " << Page_DP.PostIndex;
     std::cout << "\n\n";
 }

int main()
{
    setlocale(LC_ALL, "Russian");
    std::system("chcp 1251"); // установка кодовой страницы консоли вывода
    std::system("cls"); // очистка консоли от отображения служебной информации
    int AddressCounter;
    std::cout << "Сколько адресов необходимо хранить в справочнике: ";
    std::cin >> AddressCounter;
    AddressBook* Page_Array = new AddressBook[AddressCounter];
    std::system("cls"); // очистка консоли от отображения служебной информации

    // Ввод данных в српавочник
    for (int i = 0; i < AddressCounter; i++)
    {
        DataEntry(Page_Array[i]);
    }
    std::system("cls"); // очистка консоли от отображения служебной информации
    std::cout << "В справочнике - " << AddressCounter <<" - адресов.\n\n";

    // Печать справочника
    for (int i = 0; i < AddressCounter; i++)
    {
        DataPrint(Page_Array[i]);
    }
    return 3;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
