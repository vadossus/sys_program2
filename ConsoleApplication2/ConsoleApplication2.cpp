// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>

// 3 задание 3 вариант
struct Employee {
    char name[25];
    float salary;
};

// 4 задание 3 вариант
class Car {
    private: 
        char brand[25];
        char model[25];
    public:
        void vivesti_mashiny(char brend[25], char model[25]) {
            std::cout << "Бренд: " << brend << " Модель: " << model << std::endl;
        };
        void vvod_zhachenii(char brend[25], char model[25]) {

            for (int i = 0; i < 24; i++) {
                this->brand[i] = brend[i];
            }

            for (int i = 0; i < 24; i++) {
                this->model[i] = model[i];
            }

            vivesti_mashiny(this->brand, this->model);
        }
};

int main()
{
    setlocale(0, "rus");
    
    // 1 задание 3 вариант
    /*int massive[]{1,4,5,8,10};
    
    int count = 0;

    for (int i = 0; i < sizeof(massive) / sizeof(massive[0]); i++)
    {
        if (massive[i] % 2 == 0)
        {
            count++;
        }
    }

    std::cout << "Количество четных чисел: " << count << std::endl;*/

    // 2 задание 3 вариант
    
    /*const int a = 4;
    const int b = 4;
    
    int massive[a][b];
    int massive2[a][b];

    for (int i = 0; i < a; i++)
    {     
        for (int j = 0; j < b; j++)
        {
            std::cout << "Введите значение (целое число): ";
            std::cin >> massive[i][j];
        }
    }

    std::cout << "Оригинал\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            std::cout << massive[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            massive2[j][i] = massive[i][j];
        }
    }

    std::cout << "Изменённый\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            std::cout << massive2[i][j] << " "; 
        }
        std::cout << " " << std::endl;
    }*/


    // 3 задание 3 вариант


    /*Employee bikmacs;

    std::cout << "Введите имя сотрудника: \n";
    std::cin >> bikmacs.name;
    std::cout << "Введите зарплату сотрудника: \n";
    std::cin >> bikmacs.salary;
    float salary = bikmacs.salary * 1.10;
    std::cout << "Зарплата сотрудника: " << salary << std::endl;*/


    // 4 задание 3 вариант

    Car mashina;
    char model[25];
    char brend[25];
    std::cout << "Введите бренд автомобиля: ";
    std::cin >> brend;
    std::cout << "Введите модель автомобиля: ";
    std::cin >> model;

    mashina.vivesti_mashiny(brend, model);


}

    

   