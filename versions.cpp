/*
* This program shows the version information for programs listed in versions.lst.    
* It also outputs program file locations.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char*argv[]) {

    // Read in the list.

    string fileName = argv[0];
    fileName.append(".lst");

    ifstream listFile(fileName);
    string fileLine;
    string command;

    cout << endl;

    while (getline(listFile,fileLine)) {

        cout << "\33[4m"<< fileLine << "\033[0m" << endl;

        command = fileLine;
        command.append(" --version");
        system(const_cast<char*>(command.c_str())); 

        command = "which ";
        command.append(fileLine);
        system(const_cast<char*>(command.c_str())); 
        cout << endl;
    }
    
    listFile.close();

    return 0;
}


