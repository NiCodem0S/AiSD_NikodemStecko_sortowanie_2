#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
#include <cassert>

#include "bubblesort.hpp"

int main() {
    std::cout << "--- Testy Bubble Sort ---\n";

    std::vector<int> v1 = { 9, 4, 7, 3, 6, 8, 2, 1, 5, 0 };
    bubblesort(v1.begin(), v1.end());
    assert(std::is_sorted(v1.begin(), v1.end()));
    std::cout << "Test 1 (std::vector<int>): OK\n";

    int a1[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n1 = sizeof(a1) / sizeof(a1[0]);
    bubblesort(a1, 0, n1 - 1);
    assert(std::is_sorted(a1, a1 + n1));
    std::cout << "Test 2 (zwykla tablica int OK)\n";

    std::array<double, 6> arr = { 3.14, 1.41, 2.71, 0.58, 1.73, -1.0 };
    bubblesort(arr.begin(), arr.end());
    assert(std::is_sorted(arr.begin(), arr.end()));
    std::cout << "Test 3 (std::array<double>): OK\n";

    std::vector<std::string> words = { "pies", "kot", "albatros", "zebra", "borsuk" };
    bubblesort(words.begin(), words.end());
    assert(std::is_sorted(words.begin(), words.end()));
    std::cout << "Test 4 (std::vector<std::string>): OK\n";

    std::cout << "Wszystkie testy Bubble Sort zakonczone sukcesem!\n";
    return 0;
}
