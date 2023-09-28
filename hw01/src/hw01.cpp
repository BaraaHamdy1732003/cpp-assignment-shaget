#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int hw01(int start, int end) {
    if (start < 10 || start > 99 || end < 10 || end > 99) {
        return -1;
    }

    int sum = 0;

    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            int temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
        }
    }

    return sum;
}

int main() {
    int start, end;
    std::cout << "Enter the start and end values (two-digit numbers): ";
    std::cin >> start >> end;

    int result = hw01(start, end);

    if (result != -1) {
        std::cout << "Sum of digits for prime two-digit numbers in the range [" << start << " ... " << end << "]: " << result << std::endl;
    } else {
        std::cout << "Invalid input. Both start and end should be two-digit numbers." << std::endl;
    }

    return 0;
}
