#include <iostream>

class Dog
{
public:
	int age;
	int color;
};

class DogHouse
{
public:
	Dog* owner;

	DogHouse(const DogHouse& house)
	{
		// Swallow Copy
		// owner = house.owner;


		// Deep Copy
		owner = new Dog();
		owner->age = house.owner->age;
		owner->color = house.owner->color;
	}
};


	Dog mimi;
	DogHouse house1;	// mimi
	DogHouse house2{ house1 };
