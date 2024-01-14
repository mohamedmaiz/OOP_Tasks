#include <iostream>
using namespace std;
class Calculator {
private:
    int cum = 0;
public:
    void Add(int number) {
        cum += number;
        cout << "Result after adding " << number << " is: " << cum << endl;
    }
    void Divide(int number) {
        cum /= number;
        cout << "Result after dividing " << number << " is: " << cum << endl;
    }
    void Multiply(int number) {
        cum *= number;
        cout << "Result after multiplying " << number << " is: " << cum << endl;
    }
    void Subtract(int number) {
        cum -= number;
        cout << "Result after subtracting " << number << " is: " << cum << endl;
    }
    void Clear() {
        cum = 0;
        cout << "Result after clear is: " << cum << endl;
    }


};

int main()
{    
    Calculator calculator1 = Calculator();
    calculator1.Add(100);
    calculator1.Multiply(2);
    calculator1.Divide(4);
    calculator1.Subtract(3);
    calculator1.Clear();

    return 0;
}


