#include <iostream>
#include <intrin.h>


int main() {
    __m128d diff1 = _mm_set_pd(1.0, 3.0);
    __m128d diff2 = _mm_set_pd(1.0, 1.0);

    __m128d result = _mm_cmpneq_pd(diff1,diff2);
    int test = _mm_movemask_pd(result);

    if (test == 0) {
        std::cout << "All elements are equal";
    } else {
        std::cout << "Not all elements are equal";
    }
    return 0;
}

