#include <iostream>
#include "pb6_a.h"

int pb6a::algoritm()
{
	int n, p = 1, c, k = 0;
	std::cin >> n;
	p = p * n;
	while (n != 0)
	{
		std::cin >> n;
		if (n != 0)
			p = p * n;
	}
	int cp = p;
	while (cp != 0)
	{
		c = cp % 10;
		if (c == 0)
			k++;
		cp = cp / 10;
	}
	std::cout << p << '\n';
	std::cout << k;
	std::cout << '\n';
	return 0;
}