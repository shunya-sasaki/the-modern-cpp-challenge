/**
 * @file main.cc
 * @brief 3または5で割り切れる正の整数の総和
 * @details 与えられた上限までの3または5で割り切れる正の整数の総和を計算して出力するプログラムを書きなさい
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
