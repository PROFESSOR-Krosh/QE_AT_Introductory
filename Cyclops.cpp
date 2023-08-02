#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int N, d, count = 0;
	std::vector<int> diopters;
	std::cin >> N;

	for(int i = 0; i < N; ++i) {
		std::cin >> d;
		diopters.push_back(d);
	}

	std::sort(diopters.begin(), diopters.end());

	for(int i = 0; i < N; ++i) {
		++count;
		if(i == N - 1) break;
		if(diopters[i + 1] - diopters[i] < 3) {
			++i;
		}
		std::cout << i << " : " << count << std::endl;
	}

	std::cout << count << std::endl;

	return 0;
}