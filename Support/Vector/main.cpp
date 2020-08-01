#include <iostream>

using namespace std;

template <typename T1, typename T2, typename T3 = char>
void push (vector<T1> &v, T2 val, T3 pos = 'd')
{
    if (pos == 'd')
        v.push_back(val);
    else
        v.insert(v.begin() + (pos % v.size()), val);
}

template <typename T1, typename T2 = char>
T1 pop (vector<T1> &v, T2 pos = 'd')
{
    if (pos == 'd')
    {
        T1 value = v.at(v.size() - 1);
        v.pop_back();
        return value;
    }
    else
    {
        unsigned int index = pos % v.size();
        T1 value = v.at(index);
        v.erase(v.begin() + (index));
        return value;
    }
}

int main(int argc, const char * argv[]) {
    
    // Call push and pop
    vector<int> p = { 1, 2, 3, 4 };
    vector<string> t = { "hej", "tam", "witam", "elo" };
    cout << "wartosc to: " << pop(t, -1) << endl;
    push(p, 7, 2);
    print(p, 'm');
    
    
}