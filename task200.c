#include <iostream>

bool is_leap_year(int year) 
{
    if (year % 4 == 0) 
	{
        if (year % 100 == 0) 
		{
            if (year % 400 == 0)
			 {
                return true;
            } else 
			{
                return false;
            }
        } else 
		{
            return true;
        }
    } else 
	{
        return false;
    }
}

int main()
{
    for (int year = 2000; year <= 3000; year++) 
	{
        if (is_leap_year(year)) 
		{
            std::cout << year << std::endl;
        }
    }
    
    return 0;

