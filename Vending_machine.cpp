#include <iostream>
#include <vector>

int main() {
	int cost, paid, odd;
	std::vector<int> par = {5000, 2000, 1000, 500, 200, 100, 50, 10, 5, 2, 1};
	std::cout << "Cost of product: ";
	std::cin >> cost;
	std::cout << std::endl << "Bring in money: ";
	std::cin >> paid;
	odd = paid - cost;

	if(odd < 0) {
		std::cout << "Error: not enough money" << std::endl;
		return 1;
	}

	if(odd == 0) {
		std::cout << odd << std::endl;
		return 0;
	}

	for(int i = 0; i < par.size(); ++i) {
		if(odd / par[i] == 0) {
			continue;
		}

		std::cout << std::endl << par[i] << " rub: " << odd / par[i] << " th";
		odd -= par[i] * (odd / par[i]);
	}
	return 0;
}