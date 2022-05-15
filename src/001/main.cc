/**
 * @file main.cc
 * @brief 3と5で割り切れる数の総和を計算する
 */
#include <iostream>

/**
 * @brief メイン関数
 * 
 * @return int 
 */
int main()
{
    using namespace std;
    int target_num = 1;
    cout << "Please input integer number: ";
    cin >> target_num;
    cout << "Target number is " << target_num << endl;

    int result = 0;

    for (int i = 2; i <= target_num; i++)
    {
        if (i % 3 == 0)
        {
            result += i;
        }
        else if (i % 5 == 0)
        {
            result += i;
        }
    }
    cout << "Result value is : " << result << endl;

    return 0;
}
