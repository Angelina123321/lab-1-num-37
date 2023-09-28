#include <iostream>
#include <cmath>

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return sum;
}

int main() {
    for (int num = 1000; num <= 9999; num++) {
        int digitSum = sumOfDigits(num);
        int cubedSum = std::pow(digitSum, 3);
        if (num == cubedSum) {
            std::cout << "Four-digit number found: " << num << std::endl;
        }
    }
    return 0;
}
