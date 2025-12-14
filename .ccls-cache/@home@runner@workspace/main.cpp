#include <iostream>
int main() {
int cookies;
std::cout << "How many cookies do you want to make? ";
std::cin >> cookies;
double sugar = 1.5 * (cookies / 48.0);
double butter = 1.0 * (cookies / 48.0);
double flour = 2.75 * (cookies / 48.0);
std::cout << "Cups of sugar needed: " << sugar << std::endl;
std::cout << "Cups of butter needed: " << butter << std::endl;
std::cout << "Cups of flour needed: " << flour << std::endl;
return 0;
}