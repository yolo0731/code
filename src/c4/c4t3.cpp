#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char first_name[20], last_name[20];
    char final_name[50];

    cout << "Enter your first name: ";
    cin.getline(first_name, 20);
    cout << "Enter your last name: ";
    cin.getline(last_name, 20);
    strcpy(final_name, last_name);
    strcat(final_name, ", ");
    strcat(final_name, first_name);
    cout << "Here's the information in a single string: " << final_name << endl;
    system("pause");
    return 0;
}