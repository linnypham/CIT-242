#include <iostream>

using namespace std;

void printStars(int y);
void stars(int x);

int main() {
    int numbers;

    cout << "Enter an Integer: ";
    cin >> numbers;
    cout << endl;

    stars(numbers);

    return 0;
}

void printStars(int y)
{
    
    for (int leng = y;leng > 0;--leng)
    {
        cout << "*";
    }
    cout << endl;
}

void stars(int x)
{
    for (int numStars = x;numStars >= 1;--numStars)
    {
        printStars(numStars);
    }
    for (int numStars = 1; numStars <= x;++numStars)
    {
        printStars(numStars);
    }
}
