#include <iostream>
#include <string>

using namespace std;

template <typename T>
constexpr T pi = T(3.141592653597932385L);

template <typename T>
T area_of_circle(const T & r) {
    return r * r * pi<T>;
};

int main() {
    cout.precision(20);
    cout<<pi<long double><<" "<<area_of_circle<double>(3)<<endl;
    return 0;
}
