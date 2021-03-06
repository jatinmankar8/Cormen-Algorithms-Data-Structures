//
//  Created by Luis Eduardo Obando on 2015-11-02.
//  Copyright (c) 2015 Luis E. Obando. All rights reserved.
//

#include <iostream>
#include <vector>

template<typename T>
void insertionSort(std::vector<T>& numbers) {
    for (int j = 1; j < numbers.size(); ++j) {
        int elementToInsert = numbers[j];
        int i = j - 1;
        
        while ((i >= 0) && (numbers[i] > elementToInsert)) {
            numbers[i + 1] = numbers[i];
            i--;
        }
        numbers[i + 1] = elementToInsert;
    }
}

// Testing the inssertion sort algorithm
int main() {
    std::vector<int> numbers = {345, 44, 9, 237, 1, 5, 1, 44, 2, 5, 6};
    insertionSort(numbers);
    for(const auto& x: numbers) {
        std::cout << x <<" ";
    }
    return 0;
}
