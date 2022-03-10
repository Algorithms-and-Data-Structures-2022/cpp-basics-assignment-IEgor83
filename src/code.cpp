#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
using namespace std;
namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    }
    return mask & (1 << bit_pos);
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if(left >= middle && left >= right){
      return left;
    }
    if(left <= middle && middle >= right) {
      return middle;
    }
    if(right >= middle && left <= right) {
      return right;
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left == nullptr || right == nullptr) {
      cout <<"left = " << left << ", right = "<< right;
      return;
    }
    else {
      int a = *left;
      int b = *right;
      *left = b;
      *right = a;
      cout <<"left = " << left << ", right = "<< right;
      return;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr == 0 || length <= 0){
      return 0;
    }
    int a = 0;
    for(int i = 0;i < length;i++){
      a += arr[i];
    }
    return a;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr == nullptr || length <= 0){
      return nullptr;
    }
    int max = arr[0];
    int *adres = &arr[0];
    for(int i = 1;i < length;i++){
      if (arr[i] > max){
        max = arr[i];
        adres = &arr[i];
      }
    }
    return adres;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length <= 0){
      return nullptr;
    }
    int *a = new int[length];
    for (int i = 0; i < length; i++) {
      a[i] = init_value;
    }
    return a;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr || length <= 0){
      return nullptr;
    }
    int *a = new int[length];
    for (int i = 0; i < length; i++) {
      a[i] = arr_in[i];
    }
    return a;

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
      return;
    }
    if(length <= 0){
      os << "Invalid argument: length\n";
      return;
    }
    if(k <= 0){
      os << "Invalid argument: k\n";
      return;
    }
    if (k >= length){
      os << arr[0] << "\t";
      return;
    }
    os << arr[0] << "\t";
    int m = k;
    while (k < length){
      os << arr[k] << "\t";
      k+=m;
    }
    return;
  }

}  // namespace assignment
