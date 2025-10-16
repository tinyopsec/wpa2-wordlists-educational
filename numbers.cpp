// === Instructions to copy, compile, and run ===
// On Linux:
// 1. Copy this code (Ctrl + Shift + C in terminal or Ctrl + C in editor).
// 2. Save it as: numbers.cpp
// 3. Compile it with: g++ numbers.cpp -o numbers
// 4. Run it with: ./numbers
//
// On Windows:
// 1. Copy this code (Ctrl + C).
// 2. Save it as: numbers.cpp
// 3. Compile it with (using MinGW or similar): g++ numbers.cpp -o numbers.exe
// 4. Run it with: numbers.exe
// ==============================================

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
