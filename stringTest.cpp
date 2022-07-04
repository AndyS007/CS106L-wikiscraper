#include <iostream>
#include <algorithm>

using std::cout;            using std::endl;
using std::cerr;            using std::string;
using std::string;

int main() {

    string inp = "<a href=\"/wiki/Topological_space\">topological space</a>";
    static const string delim = "href=\"/wiki/";
    // unordered_set<string> ret;
    auto url_start = inp.begin();
    auto end = inp.end();
    url_start = std::search(url_start, end, delim.begin(), delim.end());
    cout << "url_start: " << *url_start << endl;
    // string val = "\"";
    char val = '\"';
    auto url_end = std::find(url_start + delim.length(), end, val);
    // auto url_end = std::search(url_start + delim.length(), end, val.begin(), val.end());
    cout << "url_end: " << (*url_end) << endl;
    string link = string(url_start + delim.length(), url_end + 1);
    cout << link << endl;
    return 0;
}