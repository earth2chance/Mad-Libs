#include <iostream>
#include <string>

int main()
{

	std::string FAVORITE_COLOR, EST_WORD, BODY_PART, FAVORITE_ANIMAL, NOUN, PLURAL_NOUN;
	int a, b, c;


	//getting their info
	std::cout << "Welcome to Mad Libs" << std::endl;
	std::cout << "Please enter the following for your personalized story" << std::endl;

	std::cout << "Enter your favorite color: ";
	std::cin >> FAVORITE_COLOR;

	std::cout << "Enter a word, ending in 'est': ";
	std::cin >> EST_WORD;

	std::cout << "Enter a body part that is plural: ";
	std::cin >> BODY_PART;

	std::cout << "Enter	your favorite animal: ";
	std::cin >> FAVORITE_ANIMAL;

	std::cout << "Enter a noun: ";
	std::cin >> NOUN;

	std::cout << "Enter a plural noun: ";
	std::cin >> PLURAL_NOUN;

	std::cout << "Enter your age: ";
	std::cin >> a;

	std::cout << "Enter your favorite number that is smaller than your age: ";
	std::cin >> b;

	c = a - b;

	//the story
	std::cout << "The " << FAVORITE_COLOR << " Dragon is the " << EST_WORD << " Dragon of them all." << std::endl;
	std::cout << "It has " << c << " " << BODY_PART << ", and a " << FAVORITE_ANIMAL << " shaped like a " << NOUN << "." << std::endl;
	std::cout << "It loves to eat " << PLURAL_NOUN << ", although it will feast on nearly anything." << std::endl;

	return 0;
}