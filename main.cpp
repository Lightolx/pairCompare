#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

int main()
{
    std::vector<std::pair<int, double>> vPint_double;
    vPint_double.push_back(std::make_pair(3, 3.3));
    vPint_double.push_back(std::make_pair(5, 9.4));
    vPint_double.push_back(std::make_pair(3, 2.4));
    vPint_double.push_back(std::make_pair(7, 19));
    vPint_double.push_back(std::make_pair(15, 4));


    for (auto pair0: vPint_double)
    {
        cout << pair0.first << endl;
    }

    std::sort(vPint_double.begin(), vPint_double.end(), std::greater<std::pair<int, double>>());

    cout << "\nafter sorting:\n";
    for (auto pair0: vPint_double)
    {
        cout << pair0.first << ", " << pair0.second << endl;
    }

    cout << "可以看到，两个pair也可以比较大小，首先比较pair.first，如果相等再比较pair.second" << endl;

    std::pair<int, double> tempPair1(std::make_pair(5, 9.4));
    std::pair<int, double> tempPair2(std::make_pair(5, 3.2));
    std::pair<int, double> tempPair3(std::make_pair(7, 5.2));

    if (tempPair1 > tempPair2)
    {
        cout << "pair1.second > pair2.second" << endl;
    }

    if (tempPair3 > tempPair1)
    {
        cout << "pair3.first > pair1.first" << endl;
    }
}