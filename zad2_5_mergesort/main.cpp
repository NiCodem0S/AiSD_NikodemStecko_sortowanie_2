#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
#include <cassert>

#include "mergesort.hpp"

int main() {
    std::cout << "--- Testy Merge Sort ---\n";

    std::vector<int> v1 = { 9, 4, 7, 3, 6, 8, 2, 1, 5, 0 };
    mergesort(v1.begin(), v1.end());
    assert(std::is_sorted(v1.begin(), v1.end()));
    std::cout << "Test 1 (std::vector<int>): OK\n";

    int a1[] = { 38, 27, 43, 3, 9, 82, 10 };
    int n1 = sizeof(a1) / sizeof(a1[0]);
    mergesort(a1, 0, n1 - 1);
    assert(std::is_sorted(a1, a1 + n1));
    std::cout << "Test 2 (zwykla tablica int): OK\n";

    std::array<double, 6> arr = { 4.5, 2.3, 1.1, 7.8, 3.4, 0.9 };
    mergesort(arr.begin(), arr.end());
    assert(std::is_sorted(arr.begin(), arr.end()));
    std::cout << "Test 3 (std::array<double>): OK\n";

    std::vector<std::string> words = { "programowanie", "algorytmy", "struktury", "danych", "cplusplus" };
    mergesort(words.begin(), words.end());
    assert(std::is_sorted(words.begin(), words.end()));
    std::cout << "Test 4 (std::vector<std::string>): OK\n";

    std::cout << "Wszystkie testy Merge Sort zakonczone sukcesem\n";
    return 0;
}
