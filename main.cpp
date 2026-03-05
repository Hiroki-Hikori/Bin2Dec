#include <iostream>
#include <string>
#include <math.h>

int main(int argc, char *argv[])
{
    std::string bin;
    int pos = 0;
    int result = 0;

    std::cout << "Enter a binary number: ";
    std::cin >> bin;

    for (int i = bin.size() - 1; i >= 0; i--){
        int num = bin[i] - '0';

        if (num != 1 && num != 0){
            std::cout << "Invalid input, please enter 0 or 1.";
            return 0;
        }

        result += num * pow(2, pos);
        pos++;
    }

    std::cout << "Decimal: " << result << std::endl;
    return 0;
}
