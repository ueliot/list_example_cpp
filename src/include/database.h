#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class Database
{

private:
protected:
public:
    
    Database()
    {
        // constructor
    }
    ~Database()
    {
        // destructor
    }
    vector<string> database;
    string name;

    

    void write();
    void read();
    void add_item();
    void delete_item();
};