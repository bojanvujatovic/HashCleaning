#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream in("hash.txt"); // Open for reading
	ofstream out("hashCleaned.txt"); // Open for writing
	char c;

	while (in.get(c))
	{
		if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F'))
		out.put(c);
	}

	system("pause");
	return 0;
}