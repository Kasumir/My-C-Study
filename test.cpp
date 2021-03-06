/* 현재 1부터  N까지의 정수가 한 번씩 등장하는 길이 N의 수열이 있다.
여기서 당신은 연속된 K개의 정수를 골라서 한 곳에 잠시 모아둘 수 있다.
시간이 지나면 당신이 고른 K개의 정수들은 K개 중 가장 작은 정수가 된다.
이 시간은 고려하지 않는다. 여기서 이 수열을 모두 같은 수로 만들고자 할때
최소 몇번 골라야 하는지 구하는 프로그램을 작성하시오.

예를 들어 4개의 수가 [2,3,1,4]와 같이 있고 K=3일 때, [2,3,1,4]을 고르게 되면 세 수는 2,3,1중 가장 작은 수인
1로 변하게 된다. 이후 [1,1,1,4]가 된다.

*/
#include<iostream>

using namespace std;

int main(){
    int j = 0;
    int a = 2;
    int b = 3;
    scanf("%d %d", &a, &b);
    int c = a + b;

    cout << a << " + " << b << " = " << c << endl;

    return 0;
}