#include <cstddef>

int bar() {
    return 6;
}

int foo() __attribute__ ((visibility ("default")));

int foo() {
    int r{};
    for(auto i = std::size_t{}; i < 7; ++i)
        r += bar();
    
    return r;
}

