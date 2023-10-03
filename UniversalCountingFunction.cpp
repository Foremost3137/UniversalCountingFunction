#include <iostream>
#include <vector>

std::vector<int> ucf_cpp(int n, int i_max) {
    std::vector<int> result;
    for (int i = 0; i <= i_max; ++i) {
        result.push_back(i * n);
    }
    return result;
}

int main() {
    std::vector<int> result = ucf_cpp(3, 10);
    for (int value : result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;
}
