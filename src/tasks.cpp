#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    // напишите код здесь ...
    if (lhs != nullptr && rhs != nullptr) {
        int temp_lhs = *lhs;
        *lhs = *rhs;
        *rhs = temp_lhs;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    // напишите код здесь ...
    if (num_rows <= 0 || num_cols <= 0) return nullptr;
    int **array_2d = new int *[num_rows];
    for (int i = 0; i < num_rows; i++) {
        array_2d[i] = new int[num_cols];
    }
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            array_2d[i][j] = init_value;
        }
    }
    return array_2d;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    // напишите код здесь ...
    if (arr_2d_source == nullptr || arr_2d_target == nullptr) return false;
    if (num_rows <= 0 || num_cols <= 0) return false;


    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    // напишите код здесь ...
    if (!arr.empty()) {
        if (arr.size() % 2 == 0) {
            for (int i = 0; i < arr.size() / 2; i++) {
                int t = arr[i];
                arr[i] = arr[arr.size() - i - 1];
                arr[arr.size() - i - 1] = t;
            }
        } else {
            for (int i = 0; i < arr.size() / 2 + 1; i++) {
                int t = arr[i];
                arr[i] = arr[arr.size() - i - 1];
                arr[arr.size() - i - 1] = t;
            }
        }
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    // напишите код здесь ...
    if (!arr_begin || !arr_end) {
        return;
    }
    int temp;
    while (arr_begin < arr_end) {
        temp = *arr_end;
        *arr_end = *arr_begin;
        *arr_begin = temp;
        arr_begin++;
        arr_end--;
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    if (arr && size > 0) {
        int *max = arr;
        for (int i = 0; i < size; i++) {
            if (*arr > *max) {
                max = arr;
            }
            arr += 1;
        }
        return max;
    } else {
        return nullptr;
    }
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    // напишите код здесь ...
    if (arr.empty()) return {};
    vector<int> result;

    for (int el: arr) {
        if (el % 2 != 0) {
            result.push_back(el);
        }
    }
    return result;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    // напишите код здесь ...
    vector<int> result{};
    if (!arr_a.empty() && !arr_b.empty()) {
        for (int i = 0; i < arr_a.size(); i++) {
            for (int j = 0; j < arr_b.size(); j++) {
                if (arr_a[i] == arr_b[j])
                    result.push_back(arr_a[i]);
            }
        }
    }
    return result;
}
