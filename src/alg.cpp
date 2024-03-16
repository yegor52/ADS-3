// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == value) {
            count++;
            int i = mid - 1;
            while (arr[i] == value) {
                count++;
                i--;
            }
            int j = mid + 1;
            while (arr[j] == value) {
                count++;
                j++;
            }
            return count;
        }
        else if (arr[mid] < value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return 0;
}
