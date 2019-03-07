#include <iostream>
#include "dice.cpp"
using namespace std;

class Cat {
	public:
		
		int size = 22;
		string breed = "house";
		
		void roar(){
			// int size = 45;
			cout << "The " << size << "inch " << breed;
			cout << "cat says... Roar!!" << endl;
		}
};



int main(){
	
	Cat tiger;
	Cat house;
	
	cout << "We have a cat" << endl;
	tiger.size = 45;
	tiger.breed= "tiger";
	tiger.roar();
	
	cout << "Cat 2 is created" << endl;
	house.roar();
	
	
	
	return 0;
}