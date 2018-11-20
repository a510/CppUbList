// Source: https://en.cppreference.com/w/cpp/language/ub

int foo(int x) {
    return x+1 > x; // either true or UB due to signed overflow
}
