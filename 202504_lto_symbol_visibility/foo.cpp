#include "bar.hpp"
#include <cstddef>

// int get_data() {
//     return 42;
// }

int foo() __attribute__ ((visibility ("default")));

int foo() {
    int r{};
    for(auto i = std::size_t{}; i < 7; ++i)
        r += bar();
    
    return r;
}

