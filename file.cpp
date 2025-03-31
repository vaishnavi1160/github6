#include <iostream>
#include <fstream>  

using namespace std;

int main()
 {
    ofstream file("example.txt");  
    file << "Hello, C++ File Handling!\n";
    file.close();

    ifstream readFile("example.txt");  
    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    ofstream appendFile("example.txt", ios::app);  
    appendFile << "Appending new data.\n";
    appendFile.close();

    return 0;
}
