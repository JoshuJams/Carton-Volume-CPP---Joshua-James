#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    float user_length;
    float user_height;
    float cubic_inches;
    float ounces;
    cout << "What is the side length of the base of the carton in inches? \n";
    cin >> user_length;
    cout << "What is the height of the carton in inches? \n";
    cin >> user_height;
    user_length = user_length ;
    user_height = user_height ;
    cubic_inches = user_length * user_length * user_height;
    ounces = (0.55) *(cubic_inches);
    std::cout << "The carton has a volume of " << std::fixed << setprecision(1)<< ounces << " ounces.";
}