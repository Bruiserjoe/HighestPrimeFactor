#include <iostream>
#include <stdlib.h>

bool o = true;
int number;
int output;







int main() {
	std::cout << "Hello input number:" << std::endl;
	std::cin >> number;
	//Find the biggest factor that leaves no remainder and find if prime if its not, try again
	for (int i = 1; i < number; i++) {
		if (number % i == 0) {
			//checking factor is prime
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					o = false;
				}

			}
			if (o == true) {

				output = i;
			}
			
		}
		//Have to set it back else it just takes first one it finds
		o = true;
	}
	
	std::cout << output << std::endl;
	system("pause");
}