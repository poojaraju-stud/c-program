#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;
float sine(float x);
float cosine(float x);
float tangent(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x, float y);

int main() 
{
    int n;
    float x, y, answer = 0.0;

    cout << "Select an operation:\n";
    cout << "1. sin\n2. cos\n3. tan\n4. log10\n5. square root\n6. exponent (e^x)\n7. power (x^y)\n";
    cout << "Enter your choice: ";
    cin >> n;

    if (n >= 1 && n <= 6) 
	{
        cout << "Enter value for x: ";
        cin >> x;

        switch (n) {
            case 1: answer = sine(x); break;
            case 2: answer = cosine(x); break;
            case 3: answer = tangent(x); break;
            case 4: 
                if (x <= 0) {
                    cout << "Error: log10 undefined for x <= 0\n";
                    return 1;
                }
                answer = logten(x); 
                break;
            case 5: 
                if (x < 0) {
                    cout << "Error: Cannot take square root of negative number.\n";
                    return 1;
                }
                answer = squareroot(x); 
                break;
            case 6: answer = exponent(x); break;
        }

        cout << "Answer: " << answer << endl;
    } 
    else if (n == 7) {
        cout << "Enter values for x and y: ";
        cin >> x >> y;
        answer = power(x, y);
        cout << "Answer: " << answer << endl;
    } 
    else {
        cout << "Invalid input.\n";
    }

    return 0;
}
float sine(float x) {
    return sin(x * PI / 180); 
}

float cosine(float x) {
    return cos(x * PI / 180);
}

float tangent(float x) {
    return tan(x * PI / 180);
}

float logten(float x) {
    return log10(x);
}

float squareroot(float x) {
    return sqrt(x);
}

float exponent(float x) {
    return exp(x);
}

float power(float x, float y) {
    return pow(x, y);
}

