#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto pt = vector<pair<int, int>>(n);
	for (auto i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;

		pt[i] = { x, y };
	}

	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		auto j = (i + 1) % n;

		const auto& [xi, yi] = pt[i];
		const auto& [xj, yj] = pt[j];

		const auto& dx = abs(xi - xj);
		const auto& dy = abs(yi - yj);

		ans += dx + dy;
	}

	cout << ans;

	return 0;
}