#include <iostream>
#include <vector>

int getSum(const std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}

double getAverage(const std::vector<int>& vec) {
    double sum = getSum(vec);
    double average = sum / vec.size();
    return average;
}


int main(){

    std::vector<int> numbers = {1, 2, 3};
    
    int sum = getSum(numbers);
    std::cout << "Sum: " << sum << std::endl;

    double average = getAverage(numbers);
    std::cout << "Average: " << average << std::endl;


}