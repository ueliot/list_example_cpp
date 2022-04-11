#include "include/database.h"

void Database::write(vector<string> list){
    ofstream db;
    db.open("db/list.sl");
    if(db.is_open()){
        for(int list_index=0; list_index < (int)list.size(); list_index++ ){
            db << list[list_index] << "\n";

        }
    }
    else{
        cout << "Cannot open file for writing.";
    }
    db.close();
}

void Database::read(){
    string line;
    ifstream db;
    db.open("db/list.sl");
    if (db.is_open()){
        while(getline(db, line, '\n')){
            cout << line << "\n";
            //"\n"  is a string  but '\n' is a char
        }
    }
    else{
        cout << "Cannot open file of reading. \n";
    }
    db.close();
}