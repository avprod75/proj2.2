#include <iostream>
using namespace std;
int main()
{
    char cRate;
    cout << "Input your char-rate\n";
    cin >> cRate;
    switch (cRate)
    {
    case 'A':
        cout << "Your rate is 5\n";
        break;
    case 'B':
        cout << "Your rate is 4\n";
        break;
    case 'C':
        cout << "Your rate is 3\n";
        break;
    case 'D':
        cout << "Your rate is 2\n";

        break;
        case 'a':
        cout << "Your rate is 5\n";
        break;
    case 'b':
        cout << "Your rate is 4\n";
        break;
    case 'c':
        cout << "Your rate is 3\n";
        break;
    case 'd':
        cout << "Your rate is 2\n";

        break;

    default:
        cout << "This rate isn't correct\n";
    }
}
