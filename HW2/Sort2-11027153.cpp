#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std ;

// Replace all instances of str1 with str2 in a given line
void replace_all(string &line, const string &str1, const string &str2) {
    size_t pos = 0 ;
    while ((pos = line.find(str1, pos)) != string::npos)  {
        line.replace(pos, str1.length(), str2) ;
        pos += str2.length() ;
    } // while()

} // replace_all()

// Main function
int main(int argc, char *argv[]) {
    // Variables to store command-line arguments
    vector<pair<string, string>> replace_args ;
    string sort_arg ;

    // Parse command-line arguments
    for (int i = 1 ; i < argc ; i++) {
        if (string(argv[i]) == "-o") {
            sort_arg = argv[++i] ;
        } // if()
        else if (string(argv[i]) == "-r") {
            string arg = argv[++i] ;
            size_t pos = arg.find("/") ;
            if (pos == string::npos) {
                cerr << "Invalid replace argument: " << arg << endl ;
                return 1 ;
            } // if()
            string str1 = arg.substr(0, pos) ;
            string str2 = arg.substr(pos+1) ;
            replace_args.emplace_back(str1, str2) ;
        } // else if()
        else {
            cerr << "Invalid argument: " << argv[i] << endl ;
            return 1 ;
        } // else
    } // for()

    // Read lines from standard input
    vector<string> lines ;
    string line ;
    while (getline(cin, line)) {
        // Replace strings as specified by command-line arguments
        for (auto &arg : replace_args) {
            replace_all(line, arg.first, arg.second) ;
        } // for()
        lines.push_back(line) ;
    } // while()

    // Sort the lines as specified by command-line arguments
    if (sort_arg == "asc") {
        sort(lines.begin(), lines.end()) ;
    } // if()
    else if (sort_arg == "des") {
        sort(lines.rbegin(), lines.rend()) ;
    } // else if()

    // Print the sorted lines
    for (auto &line : lines) {
        cout << line << endl ;
    } // for()

    return 0 ;
} // main()
