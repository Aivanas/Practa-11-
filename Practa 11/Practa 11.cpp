// Practa 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using std::string;
using std::cout;
using std::endl;
using std::cin;

class Animal {

public:
    Animal(string name) {
        this->animal_name = name;
    }

protected: 
    string animal_name;
};

class Pet {
private:
    //short unsigned fact_feed;   
    
protected:
    virtual void PetFeed(string name, short unsigned need_feed, short unsigned fact_feed) {
        if (fact_feed >= need_feed - 10 and fact_feed <= need_feed + 10) {
            cout << "Животное " << name << " поело и чувствует себя хорошо :)\n";
        }
        else {
            cout << name << " сдох :)\n";
        }
    }
};

class Capybara : public Animal, public Pet{
public:
    Capybara(string name_in, short unsigned need_feed_in, short unsigned fact_feed_in) : Animal{ name }, Pet{} {
        name = name_in;
        need_feed = need_feed_in;
        fact_feed = fact_feed_in;
    }
    void PetFeed() {
        cout << "Вы покормили капибару.";
        if (fact_feed >= need_feed - 10 and fact_feed <= need_feed + 10) {
            cout << "Капибара " << name << " поела и чувствует себя хорошо :)\n";
        }
        else {
            cout << name << " сдох(-ла) :)\n";
        }
    }
protected:
    string name;
    short unsigned need_feed;
    short unsigned fact_feed;
};

class Beaver : public Animal, Pet {
public:
    Beaver(string name_in, short unsigned need_feed_in, short unsigned fact_feed_in): Animal{ name }, Pet{}{
        name = name_in;
        need_feed = need_feed_in;
        fact_feed = fact_feed_in;
    }
    void PetFeed() {
        cout << "Вы покормили бобра.";
        if (fact_feed >= need_feed - 10 and fact_feed <= need_feed + 10) {
            cout << "Бобр " << name << " поел и чувствует себя хорошо :)\n";
        }
        else {
            cout << name << " сдох :)\n";
        }
    }
protected:
    string name;
    short unsigned need_feed;
    short unsigned fact_feed;
};



int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    short unsigned feed_cap;
    short unsigned feed_beav;
    string cap_name;
    string beav_name;
    srand(time(NULL));
    short unsigned need_feed_cap = rand() % 101;
    short unsigned need_feed_bev = rand() % 101;
    cout << "Как назовём капибару: ";
    cap_name = "Пафнутий";
    cout << cap_name;
    cout << "Сколько корма дать капибаре (от 0 до 100): ";
    feed_cap = 65;
    cout << feed_cap;
    Capybara cap{ cap_name, need_feed_cap, feed_cap };
    cap.PetFeed();
    
    cout << "Как назовём бобра: ";
    beav_name = "Акакий";
    cout << "Сколько корма дать бобру (от 0 до 100): ";
    feed_beav = 45;
    cout << feed_beav;
    Beaver beaver{ beav_name, need_feed_bev, feed_beav };
    beaver.PetFeed();
    return 0;
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
