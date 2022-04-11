#include <iostream>
#include <vector>
using namespace std;
class List
{

private:
protected:
public:
    string name;
    List()
    {
        // constructor
    }
    ~List()
    {
        // destructor
    }
    vector<string> list;

    

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};