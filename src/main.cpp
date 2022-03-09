#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	constexpr auto largeInt = int{ 987654321 };
	auto mnR = largeInt;
	auto mnC = largeInt;
	auto mn = largeInt;
	for (auto d = int{ 1 }; d <= n; ++d) {
		auto r = d;
		auto c = n / d;
		if (0 < n % d) {
			c += 1;
		}

		auto sum = r + c;
		if (sum < mn) {
			mnR = r;
			mnC = c;
			mn = sum;
		}
	}

	cout << mnR << ' ' << mnC;

	return 0;
}