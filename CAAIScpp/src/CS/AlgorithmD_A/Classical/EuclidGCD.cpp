#include <stdio.h>
namespace NS_EuclidGCD {
int EuclidGCD(int a, int b)
{
    int r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
} //namespace NS_EuclidGCD
using namespace NS_EuclidGCD;
void TestEuclidGCD()
{
#define N 22
    int ab[N][2] = {
        //Wikipedia
        { 252, 105 },
        //Introduction to Algorithms
        { 30, 21 },
        { 99, 78 },
        //https://www.calculatorsoup.com/
        { 816, 2260 },
        //Algorithms, S. Dasgupta
        { 1035, 759 },
        //http://everything.explained.today
        { 1386, 3213 },
        //https://www.cs.cornell.edu
        //Example of Extended Euclidean Algorithm
        { 84, 33 },
        { 432, 95256 },
        //https://www.rit.edu, 
        //The Euclidean Algorithm
        { 12, 18 },
        { 24, 54 },
        { 168, 180 },
        { 244, 354 },
        { 128, 423 },
        { 406, 555 },
        { 220, 1323 },
        { 3846, 153 },
        { 1424, 3084 },
        { 2415, 3289 },
        { 4278, 8602 },
        //Other
        { 72, 84 },
        { 102, 138 },
        { 26187, 1533 }
    };
    for (int i = 0; i < N; i++) {
        int a = ab[i][0];
        int b = ab[i][1];
        int gcd = EuclidGCD(a, b);
        printf("The GCD of %d and %d is %d\n", 
            a, b, gcd);
    }
}
