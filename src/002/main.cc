/**
 * @file main.cc
 * @brief  最大公約数
 * @details 与えられた2個の正の整数の最大公約数を計算して出力するプログラムを書きなさい。
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    
    vector<int> vals = {1, 1};


    cout << "2つの整数を入力して下さい: ";
    for (auto &val: vals) {
        cin >> val;
    }

    int max_val = *max_element(vals.begin(), vals.end());
    int min_val = *min_element(vals.begin(), vals.end());

    cout << "大きい値は" << max_val << endl;
    cout << "小さい値は" << min_val << endl;
    
    int divisor;
    for (divisor = min_val; divisor >0; divisor--){
        if ((max_val % divisor ==0) and (min_val % divisor ==0)){
            break;
        }
    }
    cout << "2つの値の最大公約数は" << divisor << "です" << endl;

    return 0;
}