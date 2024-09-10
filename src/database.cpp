#include "include/database.h"

void Database::write(vector<string> list) {
    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open()) {
        for(unsigned int i = 0; i < list.size(); i++) {
            db << list[i] << "\n";
        }
    }
    else {
        cout << "Cannot open file for writing.\n";
    }
    db.close();
}

void Database::read() {
    string line;
    ifstream db;
    db.open("db/lists.sl");

    if(db.is_open()) {
        while(getline(db,line,'\n')) {
            cout << line << "\n";
        }
    }
    else {
        cout << "Cannot open file for reading.\n";
    }
    db.close();
}