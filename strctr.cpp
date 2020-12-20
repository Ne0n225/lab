#include <iostream>

using namespace std;

int gcd(int firstValue, int secondValue)
{
    if (firstValue == 0)
    {
        return secondValue;
    }
    int result = gcd(secondValue % firstValue, firstValue);
    return result;
}

void print_result(int firstValue, int secondValue, int thirdValue, int gcd)
{
    if (thirdValue % gcd != 0)
    {
        cout << "Impossible";
        return;
    }
    firstValue /= gcd;
    secondValue /= gcd;
    thirdValue /= gcd;
    for (int i = 0; ; i++)
    {
        if ((thirdValue - i * firstValue) % secondValue == 0)
        {
            cout << i << ' ' << (thirdValue - i * firstValue) / secondValue;
            return;
        }
    }
}

int main()
{
    cout << "___________________________________________________________\n";
    cout << "Prizhigoda Vagim Igorevich group: 2-5B (020303-Aisa-o19)\n";
    cout << "___________________________________________________________\n";

    int firstValue, secondValue, thirdValue, g;

    cout << "a = ";
    cin >> firstValue;
    cout << "\nb = ";
    cin >> secondValue;
    cout << "\nc = ";
    cin >> thirdValue;
    cout << "\n";
    g = gcd(firstValue, secondValue);
    print_result(firstValue, secondValue, thirdValue, g);
}