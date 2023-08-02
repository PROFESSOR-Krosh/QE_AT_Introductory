#include <iostream>

bool prime_or_not(bool& is_prime, const int& X) {
	for(int i = 2; i <= X / 2; ++i) {
		if(X % i == 0) {
			is_prime = false;
			break;
		}
	}

	return is_prime;
}

int sum_prime(const int& X) {
	int result = 0;
	for(int i = 2; i <= X; ++i) {
		bool is_prime = true;
		is_prime = prime_or_not(is_prime, i);

		if(is_prime) result += i;
	}

	return result;
}

int main() {
	int X, result;
	std::cin >> X;
	result = sum_prime(X);
	std::cout << result << std::endl;
	
	return 0;
}