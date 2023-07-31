#include <iostream>
#include <string>
using namespace std;

string toggleCase(string str) 
{
    for(int i = 0; i < str.length(); i++) 
	{
        if(str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = toupper(str[i]);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') 
		{
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string toggledStr = toggleCase(str);
    cout << "Toggled case: " << toggledStr << endl;
    return 0;
}
