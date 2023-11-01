#include <iostream>
#include <vector>

int getSum(const std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}

int main(){
    std::vector<int> numbers = {1, 2, 3};
    int sum = getSum(numbers);
    std::cout << "Sum: " << sum << std::endl;
}