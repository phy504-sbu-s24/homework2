#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

int main() {

    double min_val{std::numeric_limits<double>::max()};
    double max_val{std::numeric_limits<double>::lowest()};

    std::vector<double> vec{0.1, 10.0, -2.9, 5, 12.2, 0.0, -103.2};

    for (auto e : vec) {
        min_val = std::min(e, min_val);
        max_val = std::max(e, max_val);
    }

    std::cout << "min / max = " << min_val << " " << max_val << std::endl;

    // now use the standard library algorithms

    auto min_it = std::min_element(vec.cbegin(), vec.cend());
    auto max_it = std::max_element(vec.cbegin(), vec.cend());

    std::cout << "min / max = " << *min_it << " " << *max_it << std::endl;

}
