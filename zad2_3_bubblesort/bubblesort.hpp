#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include <utility>
#include <iterator>

template <typename Iterator>
void bubblesort(Iterator first, Iterator last) {
    if(first == last) return;
    bool swaped = true;

    while(swaped)
    {
        swaped = false;

        auto current = first;
        auto next = first;
        ++next;

        while(next != last){
            if(*current > *next){
                std:swap(*current, *next)
                swapped = true;
            }
            ++current;
            ++next;
        }
    }

}

template <typename T>
void bubblesort(T *ptr, int left, int right) {
    if (left >= right) return;
    bubblesort(ptr + left, ptr + right + 1);
}

#endif
