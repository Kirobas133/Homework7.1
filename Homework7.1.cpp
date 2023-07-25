
#include <iostream>
#include <vector>

template <class T>
T squaring(T a) {
    return a * a;
}

template <class T>
std::vector<T> squaring(std::vector<T>& vec) {
    for (auto& i : vec) {
        i = i * i;
    }
    return vec;
}

int main()
{
    int a = 5;
    std::vector <int> b = { 1, 5, 6, 2, 3 };
    
   std::cout << squaring(a) << std::endl;
   squaring(b);
   for (auto i : b) {
       std::cout << i << " ";
   }
   std::cout << std::endl;
}