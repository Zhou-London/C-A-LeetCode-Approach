#include "iostream"
#include "vector"
#include "string"

using namespace std;

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    v1.erase(v1.begin());

    cout << v1[0] << "\n";
}