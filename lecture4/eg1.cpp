#include <iostream>

using namespace std;

class integer
{
private:
    int * p = nullptr;
public:
    integer(int i) : p {new int {i}}
    {
        cout << "ctor\n";
    }

    ~integer()
    {
        delete p;
        cout << "dtor\n";
    }

    int get() const
    {
        return *p;
    }
    void set(int i)
    {
        *p = i;
    }
};

int main()
{
    integer i {1};
    integer j {2};
    integer k {i.get() + j.get()};

    cout << k.get() << "\n";
}
