#include <iostream>
#include <vector>
#include "Randomizer2000.h"

using namespace std;

int main()
{
	cout << Randomizer2000::Instance().random(5, 20) << endl;
	std::vector a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	Randomizer2000::Instance().shuffle(a);
	for (auto& i: a)
	{
		cout << i << " ";
	}


	return 0;
}
