#include <iostream>
#include <string>
//STL containers
#include <vector>
#include <list>
#include <utility> //pair
#include <tuple>
#include <array>
#include <deque>
#include <queue> //underlying container is deque
#include <stack> //underlying container is deque
#include <set> //includes multisets (allows dups)
#include <unordered_set> //includes multisets (allows dups)
#include <map> //includes multimaps (allows dups)

using namespace std;

template <typename T>
T pi = T(3.141592653597932385L);

template <typename T>
T area_of_circle(const T & r) {
    return r * r * pi<T>;
};

int main() {
    cout.precision(20);
    cout<<pi<long double><<" "<<area_of_circle<double>(3)<<endl;
    return 0;
}