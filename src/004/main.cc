/**
 * @file main.cc
 * @brief 与えられた正の整数より小さい最大の素数
 * @details 与えられた正の整数より小さい最大の素数を計算して出力するプログラムを書きなさい。
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << "正の整数を入力してください";
    int inp_val = 0;
    cin >> inp_val;
    bool is_found = false;
    for (int target_val = inp_val - 1; target_val > 1; target_val--)
    {
        is_found = false;
        for (int divide = target_val - 1; divide > 1; divide--)
        {
            if (target_val % divide == 0)
            {
                is_found = true;
                break;
            }
        }
        if (is_found == true)
        {
            continue;
        }
        cout << "素数は" << target_val << "です" << endl;
        break;
    }

    return 0;
}