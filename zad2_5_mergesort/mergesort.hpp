#ifndef MERGESORT_HPP
#define MERGESORT_HPP

#include <iterator>
#include <algorithm>

template <typename Iterator>
void mergesort(Iterator first, Iterator last) {
    auto dist = std::distance(first, last);

    if (dist <= 1) return;

    Iterator mid = first;
    std::advance(mid, dist / 2);

    mergesort(first, mid);
    mergesort(mid, last);

    std::inplace_merge(first, mid, last);
}

template <typename T>
void mergesort(T *ptr, int left, int right) {
    if (left >= right) return;
    mergesort(ptr + left, ptr + right + 1);
}

#endif