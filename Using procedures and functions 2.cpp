#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void fillArray(std::vector<int>& arr, int min, int max) {
    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = rand() % (max - min + 1) + min; 
    }
}

// Функция для подсчета ненулевых элементов в массиве
int countNonZeroElements(const std::vector<int>& arr) {
    int count = 0;
    for (const auto& value : arr) {
        if (value != 0) {
            count++;
        }
    }
    return count;
}

//Основная логики задачи
void processArrays(int n, int m) {
    std::vector<int> F(n);
    std::vector<int> G(m);

    // Заполнение массивов
    fillArray(F, -5, 5); 
    fillArray(G, -5, 5); 

    // Подсчет ненулевых элементов
    int nonZeroCountF = countNonZeroElements(F);
    int nonZeroCountG = countNonZeroElements(G);

    // Вывод результатов
    std::cout << "Array F: ";
    for (const auto& value : F) {
        std::cout << value << " ";
    }
    std::cout << "nКоличество ненулевых элементов в массиве F: " << nonZeroCountF << std::endl;

    std::cout << "Array G: ";
    for (const auto& value : G) {
        std::cout << value << " ";
    }
    std::cout << "nКоличество ненулевых элементов в массиве G: " << nonZeroCountG << std::endl;
}
int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int n = 10; // Размер массива F
    const int m = 15; // Размер массива G

    processArrays(n, m);

    return 0;
}
