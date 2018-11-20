// Source: https://en.cppreference.com/w/cpp/language/ub
int foo1(int x) {
    return x+1 > x; // either true or UB due to signed overflow
}

// Source: https://en.cppreference.com/w/cpp/language/ub
void foo2() {
    bool p; // uninitialized local variable
    if(p) // UB access to uninitialized scalar
        std::puts("p is true");
}

https://twitter.com/shafikyaghmour/status/1064366507323478016
void foo3() {
    int n = 1;
    auto p = std::minmax(n, n+1);
    printf("%d%d", p.first, p.second);
}
