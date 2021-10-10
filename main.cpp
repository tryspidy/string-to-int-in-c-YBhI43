#include <iostream>
#include <string>
using namespace std;
int main() {
 
    string s = "10";
 
    try
    {
        int i = stoi(s);
        cout << i << '\n';
    }
    catch (invalid_argument const &e)
    {
        cout << "Bad input: std::invalid_argument thrown" << '\n';
    }
    catch (out_of_range const &e)
    {
        cout << "Integer overflow: std::out_of_range thrown" << '\n';
    }
 
    return 0;
}