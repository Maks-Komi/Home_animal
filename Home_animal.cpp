#include<iostream>
#include<string>
using namespace std;

/*Создать базовый класс "Домашнеее Животное" и производные классы "Собака", "Кошка" и "Попугай".
С помощью конструктора задать имя каждому животному и его характеристики*/

class Home_animal {
protected:
	string name; //Имя животного
	int age; //Возраст животного
	int paws; //Количество лап у животного
	const int eyes =2; //Количество глаз у животного
	float weight; //Вес животного
public:
	
	Home_animal(string n, int a, int p, float w) {
		this->name = n;
		this->age = a;
		this->paws = p;
		this->weight = w;
	}
};

class Cat : public Home_animal {
	string cat_say = "myau";
public:
	Cat(string n, int a, int p, float w) : Home_animal ("name", 5, 4, 5.56) { //Класс кошка в классе домашнее животное
		name = n;
		age = a;
		paws = p;
		weight = w;
	}
	void print() { //Рисует кошку на экран
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				switch (i)
				{
				case 0: if (j == 0 || j == 1 || j == 14 || j == 15)cout << "*";
					  else cout << " ";  break;
				case 1:	if (j == 0 || j == 2 || j >= 13 && j <= 15) cout << "*";
					  else cout << " "; break;
				case 2: if (j == 0 || j == 3 || j == 12 || j == 15) cout << "*"; 
					  else cout << " "; break;
				case 3:	if (j == 0 || j == 3 || j == 4 || j == 11 || j == 15) cout << "*"; 
					  else cout << " "; break;
				case 4: if (j == 1 || j >= 4 && j <= 13 || j == 15) cout << "*"; 
					  else cout << " "; break;
				case 5: if (j >= 1 && j <= 14) cout << "*"; 
					  else cout << " "; break;
				case 6: if (j >= 2 && j <= 4 || j >= 7 && j <= 9 || j >= 12 && j <= 14) cout << "*"; 
					  else cout << " "; break;
				case 7: if (j == 2 || j == 3 || j == 5 || j == 8 || j == 11 || j == 13 || j == 14 ||
					j == 16 || j == 17) cout << "*";
					  else cout << " "; break;
				case 8: if (j == 2 || j == 3 || j == 5 || j == 8 || j == 11 || j == 13 || j == 14 ||
					j == 16 || j == 17 || j == 18) cout << "*";
					  else cout << " "; break;
				case 9: if (j == 3 || j == 4 || j >= 7 && j <= 9 || j == 12 || j == 13 || j >= 17 &&
					j <= 19) cout << "*";
					  else cout << " "; break;
				case 10: if (j >= 3 && j <= 7 || j >= 9 && j <= 13 || j == 18 || j == 19) cout << "*"; 
					   else cout << " "; break;
				case 11: if (j >= 5 && j <= 11 || j == 18 || j == 19) cout << "*";
					   else cout << " "; break;
				case 12: if (j >= 7 && j <= 10 || j >= 17 && j <= 19) cout << "*";
					   else cout << " "; break;
				case 13: if (j == 7 || j == 10 || j >= 16 && j <= 19) cout << "*";
					   else cout << " "; break;
				case 14: if (j >= 6 && j <= 12 || j >= 14 && j <= 18) cout << "*";
					   else cout << " "; break;
				case 15: if (j >= 5 && j <= 17) cout << "*";
					   else cout << " "; break;
				case 16: if (j >= 4 && j <= 10 || j >= 12 && j <= 16) cout << "*";
					   else cout << " "; break;
				case 17: if (j >= 4 && j <= 9 || j >= 11 && j <= 17) cout << "*"; 
					   else cout << " "; break;
				case 18: if (j >= 3 && j <= 8 || j >= 10 && j <= 13 || j >= 15 && j <= 18) cout << "*";
					   else cout << " "; break;
				case 19: if (j >= 2 && j <= 4 || j == 6 || j == 7 || j >= 9 && j <= 12 || j >= 14 &&
					j <= 19) cout << "*";
					   else cout << " "; break;
				}
			}
			cout << endl;
		}
		cout << "Name: " << name << "\t" << "Vozrast: " << age << "\t" << "Lapy: " << paws << "\t"
			<< "Ves: " << weight << endl;
	}
};

class Dog : public Home_animal {
	string dog_say = "gav";
public:
	Dog(string n, int a, int p, float w) : Home_animal("name", 4, 4, 21.57) { //Класс собака в классе домашнее животное
		name = n;
		age = a;
		paws = p;
		weight = w;
	}
	void print() {
		for (int i = 0; i <= 30; i++) {
			for (int j = 0; j < 25; j++) {
				switch (i)
				{
				case 0: if (j == 16)cout << "*";
					  else cout << " ";  break;
				case 1:	if (j == 4 || j == 15 || j == 17) cout << "*";
					  else cout << " "; break;
				case 2: if (j == 3 || j == 5 || j == 14 || j == 18) cout << "*";
					  else cout << " "; break;
				case 3:	if (j == 3 || j == 6 || j == 14 || j == 16 || j == 18) cout << "*";
					  else cout << " "; break;
				case 4: if (j == 2 || j == 4 || j == 6 || j == 14 || j == 16 || j == 19) cout << "*";
					  else cout << " "; break;
				case 5: if (j == 2 || j == 4 || j == 7 || j == 13 || j == 16 || j == 19) cout << "*";
					  else cout << " "; break;
				case 6: if (j == 2 || j == 4 || j == 5 || j >= 7 && j <= 13 || j == 16 || j == 17 || j == 20) cout << "*";
					  else cout << " "; break;
				case 7: if (j == 2 || j >= 4 && j <= 17 || j == 19 || j == 20) cout << "*";
					  else cout << " "; break;
				case 8: if (j == 2 || j >= 4 && j <= 18 || j == 20) cout << "*";
					  else cout << " "; break;
				case 9: if (j == 2 || j >= 4 && j <= 18 || j == 21) cout << "*";
					  else cout << " "; break;
				case 10: if (j >= 2 && j <= 6 || j >= 9 && j <= 11 || j >= 14 && j <= 19 || j == 21) cout << "*";
					   else cout << " "; break;
				case 11: if (j >= 2 && j <= 5 || j == 10 || j == 11 || j >= 15 && j <= 21) cout << "*";
					   else cout << " "; break;
				case 12: if (j >= 2 && j <= 5 || j == 10 || j == 11 || j >= 16 && j <= 21) cout << "*";
					   else cout << " "; break;
				case 13: if (j >= 1 && j <= 4 || j == 10 || j == 11 || j >= 17 && j <= 20 || j == 22) cout << "*";
					   else cout << " "; break;
				case 14: if (j == 1 || j == 3 || j == 4 || j == 6 || j == 7 || j == 10 || j == 11
					|| j == 14 || j == 15 || j == 19 || j == 22) cout << "*";
					   else cout << " "; break;
				case 15: if (j == 1 || j == 4 || j == 7 || j == 8 || j == 10 || j == 11 || j == 13
					|| j == 14 || j == 23) cout << "*";
					   else cout << " "; break;
				case 16: if (j == 0 || j == 7 || j == 8 || j == 10 || j == 13 || j == 14 || j == 23) cout << "*";
					   else cout << " "; break;
				case 17: if (j == 0 || j == 10 || j == 23 || j == 24) cout << "*";
					   else cout << " "; break;
				case 18: if (j == 0 || j == 24) cout << "*";
					   else cout << " "; break;
				case 19: if (j == 0 || j >= 9 && j <= 11 || j == 24) cout << "*";
					   else cout << " "; break;
				case 20: if (j == 0 || j == 1 || j >= 8 && j <= 12 || j == 23 || j == 24) cout << "*";
					   else cout << " "; break;
				case 21: if (j == 1 || j == 6 || j >= 9 && j <= 11 || j == 15 || j == 22 || j == 24) cout << "*";
					   else cout << " "; break;
				case 22: if (j == 1 || j == 2 || j == 7 || j == 10 || j == 14 || j == 15 ||
					j == 21 || j == 24) cout << "*";
					   else cout << " "; break;
				case 23: if (j >= 1 && j <= 3 || j == 7 || j == 10 || j == 13 || j == 14 ||
					j == 20 || j == 24) cout << "*";
					   else cout << " "; break;
				case 24: if (j >= 2 && j <= 4 || j >= 8 && j <= 12 || j == 14 || j == 23) cout << "*";
					   else cout << " "; break;
				case 25: if (j == 2 || j == 4 || j == 5 || j == 9 || j == 11 || j == 13 ||
					j == 19 || j == 23) cout << "*";
					   else cout << " "; break;
				case 26: if (j == 1 || j == 2 || j == 4 || j == 5 || j == 9 || j == 11 ||
					j == 13 || j == 23) cout << "*";
					   else cout << " "; break;
				case 27: if (j == 1 || j == 2 || j == 5 || j == 9 || j == 12 || j == 24) cout << "*";
					   else cout << " "; break;
				case 28: if (j == 1 || j == 2 || j == 5 || j == 10 || j == 11 || j == 24) cout << "*";
					   else cout << " "; break;
				case 29: if (j == 0 || j == 2 || j == 3 || j == 5 || j == 6 || j == 24) cout << "*";
					   else cout << " "; break;
				case 30: if (j == 0 || j == 2 || j == 3 || j == 6 || j == 7 || j == 24) cout << "*";
					   else cout << " "; break;
				}
			}
			cout << endl;
		}
		cout << "Name: " << name << "\t" << "Vozrast: " << age << "\t" << "Lapy: " << paws << "\t"
			<< "Ves: " << weight << endl;
	}
};

class Parrot : public Home_animal {
	string parrot_say = "Kesha xoroshiy!";
public:
	Parrot(string n, int a,int p, float w) : Home_animal("name", 3, 2, 0.926) { //Класс попугай в классе домашнее животное
		name = n;
		age = a;
		paws = p;
		weight = w;
	}
	void print() {
		for (int i = 0; i <= 24; i++) {
			for (int j = 0; j < 24; j++) {
				switch (i)
				{
				case 0: if (j == 18 || j == 19)cout << "*";
					  else cout << " ";  break;
				case 1:	if (j >= 16 && j <= 19 || j == 22 || j == 23) cout << "*";
					  else cout << " "; break;
				case 2: if (j >= 14 && j <= 17 || j >= 20 && j <= 23) cout << "*";
					  else cout << " "; break;
				case 3:	if (j >= 12 && j <= 15 || j >= 18 && j <= 22) cout << "*";
					  else cout << " "; break;
				case 4: if (j >= 11 && j <= 13 || j >= 16 && j <= 18 || j == 21) cout << "*";
					  else cout << " "; break;
				case 5: if (j == 10 || j == 11 || j >= 14 && j <= 16 || j >= 19 && j <= 22) cout << "*";
					  else cout << " "; break;
				case 6: if (j == 9 || j == 10 || j >= 12 && j <= 14 || j >= 17 && j <= 19 || j == 21 || 
					j == 22) cout << "*";
					  else cout << " "; break;
				case 7: if (j == 8 || j == 9 || j == 11 || j == 12 || j == 16 || j == 17 || j == 20 || 
					j == 21) cout << "*";
					  else cout << " "; break;
				case 8: if (j >= 2 && j <= 4 || j == 8 || j == 10 || j == 11 || j >= 14 && j <= 16 || 
					j >= 18 && j <= 21) cout << "*";
					  else cout << " "; break;
				case 9: if (j == 1 || j == 2 || j == 4 || j == 5 || j >= 7 && j <= 11 || j == 13 || j == 14 ||
					j == 17 || j == 18 || j == 20) cout << "*";
					  else cout << " "; break;
				case 10: if (j >= 0 && j <= 5 || j >= 7 && j <= 10 || j == 13 || j == 16 || j == 17 || j == 19 ||
					j == 20) cout << "*";
					   else cout << " "; break;
				case 11: if (j >= 2 && j <= 5 || j == 7 || j == 9 || j == 10 || j == 15 || j == 16 || j == 18 ||
					j == 20) cout << "*";
					   else cout << " "; break;
				case 12: if (j >= 2 && j <= 4 || j == 8 || j == 9 || j == 14 || j == 17 || j == 19 ||
					j == 20) cout << "*";
					   else cout << " "; break;
				case 13: if (j >= 1 && j <= 3 || j >= 5 && j <= 9 || j == 19) cout << "*";
					   else cout << " "; break;
				case 14: if (j == 1 || j == 2 || j >= 4 && j <= 9 || j == 18 || j == 19) cout << "*";
					   else cout << " "; break;
				case 15: if (j >= 3 && j <= 9 || j == 17) cout << "*";
					   else cout << " "; break;
				case 16: if (j >= 1 && j <= 10 || j == 16 || j == 17) cout << "*";
					   else cout << " "; break;
				case 17: if (j >= 1 && j <= 11 || j == 15) cout << "*";
					   else cout << " "; break;
				case 18: if (j >= 2 && j <= 12 || j == 14 || j == 15) cout << "*";
					   else cout << " "; break;
				case 19: if (j >= 3 && j <= 14) cout << "*";
					   else cout << " "; break;
				case 20: if (j >= 5 && j <= 11 || j >= 13 && j <= 17) cout << "*";
					   else cout << " "; break;
				case 21: if (j >= 7 && j <= 21) cout << "*";
					   else cout << " "; break;
				case 22: if (j == 9 || j == 10 || j >= 12 && j <= 16 || j == 19 || j == 20) cout << "*";
					   else cout << " "; break;
				case 23: if (j == 8 || j == 9 || j == 14 || j >= 17 && j <= 19) cout << "*";
					   else cout << " "; break;
				case 24: if (j >= 15 && j <= 17) cout << "*";
					   else cout << " "; break;
				}
			}
			cout << endl;
		}
		cout << "Name: " << name << "\t" << "Vozrast: " << age << "\t" << "Lapy: " << paws << "\t" 
			<< "Ves: " << weight << endl;
	}
};

int main() {
	Cat cat("Murka", 6, 4, 5.256);
	Dog dog("Bobik", 5, 4, 21.345);
	Parrot parrot("Kesha", 3, 2, 0.946);
	cat.print();
	dog.print();
	parrot.print();
}