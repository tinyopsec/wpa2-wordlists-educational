#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::ofstream file("numbers.txt");
    if (!file.is_open()) {
        std::cerr << "failed to create numbers.txt" << std::endl;
        return 1;
    }

    for (int i = 1; i <= 99999999; ++i) {
        file << std::setw(8) << std::setfill('0') << i << '\n';
    }

    file.close();
    std::cout << "successful" << std::endl;
    return 0;
}
