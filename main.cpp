#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(){
    ifstream inTempStream;
    ofstream outLogStream;
    ifstream inUsrDeetsStream;


    outLogStream.open("~/log.txt");
    char *tempOut;
    string finalOut;
    string command;
    cin >> command;
    basic_string<char, char_traits<char>, allocator<char>> realCommand;
    realCommand = command + " > /temp.txt";
    system("whoami > /tempusrdeets.txt");
    system("echo \"`\" >> /tempusrdeets.txt");
    inUsrDeetsStream.open("/tempusrdeets.txt");
    inUsrDeetsStream.getline(tempOut,0);
    outLogStream << tempOut << "\t";
    system("date > /tempusrdeets.txt");
    system("echo \"`\" >> /tempusrdeets.txt");
    inUsrDeetsStream.getline(tempOut,0);
    outLogStream << tempOut << "\t";
    system( realCommand);
    inTempStream.open("/temp.txt");
    while (1){
        inTempStream.getline(tempOut,50);
        cout << tempOut << endl;
        outLogStream << tempOut << "\n";


    }
}











