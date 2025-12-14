#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
srand(time(NULL));
int num1 = rand() % 100 + 1;
int num2 = rand() % 100 + 1;
std::cout << "What is " << num1 << " + " << num2 << " ?" <<
std::endl;
std::cout << "Press any key to see the answer..." << std::endl;
std::cin.get();
std::cout << "The answer is " << num1 + num2 << std::endl;
return 0;
}