#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
double principal, rate, amount, interest;
int times;
std::cout << "Enter the principal amount: ";
std::cin >> principal;
std::cout << "Enter the interest rate (as a decimal): ";
std::cin >> rate;
std::cout << "Enter the number of times interest is compounded per
year: ";
std::cin >> times;
amount = principal * std::pow(1 + (rate / times), times);
interest = amount - principal;
std::cout << std::endl;
std::cout << "Interest Rate: " << std::fixed
<< std::setprecision(2) << (rate * 100) << "%"
<< std::endl;
std::cout << "Times Compounded: " << times << std::endl;
std::cout << "Principal: $" << std::fixed
<< std::setprecision(2) << principal << std::endl;
std::cout << "Interest: $" << interest << std::endl;
std::cout << "Amount in Savings: $" << amount << std::endl;
return 0;
}