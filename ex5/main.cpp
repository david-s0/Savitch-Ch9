#include <iostream>

using namespace std;

int main()
{
  char *lab[4];

  int logged;
  
  for (int k = 0; k < 4; k++)
    {
      cout << "How many users are logged on to machine #" << k + 1 << "?" << endl;
      cin >> logged;
      lab[k] = new char[logged * 6];
      for (int i = 0; i < logged; i++)
	{
	  cout << "Machine number for user " << i + 1 << ":" << endl;
	  cin >> lab[k][i * 6];
	  cout << "User ID (5 digits):" << endl;
	  for (int j = 1; j < 6; j++)
	    {
	      cin >> lab[k][(i * 6) + j];
	    }
	}
    }

  return 0;
}
