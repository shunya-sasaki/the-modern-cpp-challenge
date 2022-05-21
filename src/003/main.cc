/**
 * @file main.cc
 * @brief 最小公倍数
 * @details 与えられた2個以上の正の整数について、
 * その最小公倍数を計算して出力するプログラムを書きなさい。
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n_args;
    cout << "引数の数を入力してください: ";
    cin >> n_args;

    cout << "正の整数を入力してください: ";
    vector<int> vals(n_args);
    for (auto &val : vals)
    {
        cin >> val;
    }
    cout << "入力が完了しました" << endl;
    int max_val = *max_element(vals.begin(), vals.end());
    auto lim = 1;
    for (auto i : vals)
    {
        lim *= i;
    }

    for (auto i = max_val; i <= lim; i++)
    {
        auto can_divide = true;
        for (auto &val : vals)
        {
            if (i % val > 0)
            {
                can_divide = false;
                break;
            }
        }
        if (can_divide == true)
        {
            cout << "最小公倍数は" << i << "です" << endl;
        }
    }
}