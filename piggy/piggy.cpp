#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  
  double dollars;

  //Asking the questions and taking inputs:
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  //Converting to USD:
  double conversion_rate1 = 0.00032;
  double conversion_rate2 = 0.27;
  double conversion_rate3 = 0.3;


  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
}