#include <iostream>

void printNumbers(int N, bool isEven) {
    std::cout << "Numbers from 0 to " << N << ": ";
    for (int i = 0; i <= N; i++) {
        std::cout << i + isEven << " ";
        i++;
    }
    std::cout << std::endl;
}

int main() {
    const int N = 10;

    std::cout << "Even numbers " << N << ": ";
    for (int i = 0; i <= N; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd numbers " << N << ": ";
    for (int i = 1; i <= N; i += 2) {
        std::cout << i << " ";
    }
    return 0;
}
