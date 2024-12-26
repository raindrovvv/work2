#include <iostream>
using namespace std;

class Animal
{
public:
	//가상 함수 선언
	virtual void makeSound() = 0;
	//가상 소멸자 선언
	virtual ~Animal() {}
};

class Dog : public Animal {
public:
	void makeSound() override {
		cout << "멍멍!!! 왈왈왈!!" << endl;
		}	
	};

class Cat : public Animal {
public:
	void makeSound() override {
		cout << "야옹~ 야옹~" << endl;
	}
};

class Cow : public Animal {
public:
	void makeSound() override {
		cout << "음메~ 음메~~~" << endl;
		}
	};

int main()
{
	//동물 배열 넣기
	Animal* animal[] = { new Dog(), new Cat(), new Cow() };

	//배열에 있는 모든 동물 소리내기
    for (Animal* animalPtr : animal)
	{
		animalPtr->makeSound();
	}

	//동적할당 해제
	for (Animal* animalPtr : animal)
	{
		delete animalPtr;
	}
}