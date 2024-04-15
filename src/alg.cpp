// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int count = 0;
  int lower = 0;
  int upper = size - 1;
  while (lower <= upper) {
    int mid = lower + (upper - lower) / 2;
    if (arr[mid] == value) {
      count++;
      int left = mid - 1;
      int right = mid + 1;
      while (left >= 0 && arr[left] == value) {
        count++;
        left--;
      }
      while (right < size && arr[right] == value) {
        count++;
        right++;
      }
      return count;
    } else if (arr[mid] < value) {
      lower = mid + 1;
    } else {
      upper = mid - 1;
    }
  }
  return 0; // если ничего не найдено
}
