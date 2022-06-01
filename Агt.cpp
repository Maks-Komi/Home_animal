//#include <iostream>
//#include <string>
//using namespace std;
///*class Base_class {
//    string name;
//};
//class Child_class : public Base_class {
//    string surname;
//};
//Создать базовый класс "Домашнее Животное" и производные классы
//"Собака", "Кошка", "Крыса", "Змея", "Птица". С помощью конструктора
//'задать имя каждому животному и его характеристики*/
//class Pets {
//protected:
//    string name;
//    string character;
//    int age;
//    int number_of_paws;
//public:
//    Pets(string name, string character, int age, int number_of_paws) : name(name), 
//        character(character), 
//        age(age), 
//        number_of_paws(number_of_paws) {}
//
//    void print() {
//        cout << "Pets(" << name << ", " << character << ", " << age << ", " << number_of_paws << ") ";
//    }
//};
//
//class Dog : public Pets {
//public:
//    Dog(string n, string ch, int a, int p) : Pets ("name", "character", 0, 0) {
//        name = n;
//        character = ch;
//        age = a;
//        number_of_paws = p;
//    }
//        //: name(name),character(character),age(age),number_of_paws(4), {}
//        // Можно ли не создавать такой конструктор?
//};
//class Cat : public Pets {
//public:
//    Cat(string n, string ch, int a, int paws) : Pets("name", "character", 0, 0) { //: name(name), character(character), age(age), number_of_paws(4), {}
//        name = n;
//        character = ch;
//        age = a;
//        number_of_paws = paws;
//    }
//};
//class Rat : public Pets {
//public:
//    Rat(string n, string ch, int a, int paws) : Pets("name", "character", 0, 0) {// : name(name), character(character), age(age), number_of_paws(4), {}
//        name = n;
//        character = ch;
//        age = a;
//        number_of_paws = paws;
//    }
//};
//class Snake : public Pets {
//public:
//    Snake(string n, string ch, int a, int paws) : Pets("name", "character", 0, 0) { //: name(name), character(character), age(age), number_of_paws(0), {}
//        name = n;
//        character = ch;
//        age = a;
//        number_of_paws = paws;
//    }
//};
//
//class Bird : public Pets {
//public:
//    Bird(string n, string ch, int a, int paws) : Pets("name", "character", 0, 0) { //: name(name), character(character), age(age), number_of_paws(0), {}
//        name = n;
//        character = ch;
//        age = a;
//        number_of_paws = paws;
//    }
//};
//
///*возможно ли функцию вывода на экран унаследовать для все классов или для этого нужно создать отдельный класс? */
//
//int main()
//{
//    Dog A("Rex", "friendly", 5, 4);
//    Cat B("Kitty", "playful", 2, 4);
//    Snake C("Kaa", "lazy", 3, 0);
//    Bird D("Whistle", "sly", 1, 2);
//    cout << "We have: ";
//    A.print();
//    cout << endl;
//    B.print();
//    cout << endl;
//    C.print();
//    cout << endl;
//    D.print();
//    cout << "Watch out!)\n";
//}