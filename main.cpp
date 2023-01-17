#include <iostream>
#include <string>

using namespace std;

int main()
{
    string adj;
    cout << "Input an 8 letter adjective" << endl;
    cout << "Example: IM XXXXXXXX" << endl;
    //cin >> adj;
    getline(cin, adj);
    string rea(adj);
    cout << rea.at(7);
    cout << rea.at(8);
    cout << rea.at(2);
    cout << rea.at(9);
    cout << rea.at(10);
    cout << rea.at(4);
    cout << rea.at(6);
    cout << rea.at(5);
    cout << rea.at(3);
    cout << rea.at(0);
    cout << rea.at(1);

    return 0;
}
