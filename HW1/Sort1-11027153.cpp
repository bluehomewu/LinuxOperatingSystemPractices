#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std ;

int main(int argc, char* argv[]) {
    string order = "none" ;
    if (argc == 3) {
        string arg = argv[1] ;
        if (arg == "-o" && (string(argv[2]) == "asc" || string(argv[2]) == "des")) {
            order = string(argv[2]) ;
        } // if()

        else {
            cout << "Usage: " << argv[0] << " [-o ordering] < fileName\n" ;
            cout << "Sort the content of the given file by lines. The specified ordering can be either 'asc' or 'des'.\n" ;
            cout << "Example: " << argv[0] << " -o asc < myFile\n" ;
            return 1 ;
        } // else()

    } // if()
    else if (argc != 1) {
        cout << "Usage: " << argv[0] << " [-o ordering] < fileName\n" ;
        cout << "Sort the content of the given file by lines. The specified ordering can be either 'asc' or 'des'.\n" ;
        cout << "Example: " << argv[0] << " -o asc < myFile\n" ;
        return 1 ;
    } // else if()

    vector<string> lines ;
    string line ;
    while (getline(cin, line)) {
        lines.push_back(line) ;
    } // while()

    if (order == "asc") {
        sort(lines.begin(), lines.end()) ;
    } // if()

    else if (order == "des") {
        sort(lines.rbegin(), lines.rend()) ;
    } // else if()

    for (const auto& l : lines) {
        cout << l << endl ;
    } // for()

    return 0 ;
} // main()

