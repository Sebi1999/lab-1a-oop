#include<iostream>
#include "pb6_b.h"
int Prim(int a)
{
    int d, s = 0;
    for (d = 1; d <= a; d++)
        if (a % d == 0)
            s++;
    if (s == 2)
        return 1;
    else
        return 0;
}
    int pb6b::secventa()
    {
        
        
            int i, ct = 0;
 
            int max = 0;
            int poz1, poz2, v[100], n;
            std::cin >> n;
            for (i = 1; i <= n; i++)
                std::cin >> v[i];
            for (i = 1; i <= n; i++)
            {
                if (Prim(v[i] + v[i + 1]) == 1)
                    ct++;
                else
                {
                    if (ct > max)
                    {
                        max = ct;
                        poz1 = i - ct + 1;
                        poz2 = i;
                    }
                    ct = 1;
                }
                if (ct > max)
                {
                    max = ct;
                    poz1 = i - ct + 1;
                    poz2 = i;
                }
                std::cout << max;
                std::cout << '\n';
                for (i = poz1; i <= poz2; i++)
                {
                    std::cout << v[i] << " ";
                    std::cout << '\n';
                }
                return 0;
            }
    }
