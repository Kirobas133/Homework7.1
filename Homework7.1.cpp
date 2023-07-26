
#include <iostream>
#include <vector>

template <class T>
T squaring(T a) {
    return a * a;
}

template <class T>
std::vector<T> squaring(const std::vector<T>& vec) {
    std::vector<T> vec2 = vec;
    for (auto& i : vec2) {
        i = i * i;
    }
    return vec2;
}

int main()
{
    int a = 5;
    std::vector <int> b = { 1, 5, 6, 2, 3 };
    
   std::cout << squaring(a) << std::endl;
   std::vector<int> c = squaring(b);
   for (auto i : c) {
       std::cout << i << " ";
   }
   std::cout << std::endl;
}