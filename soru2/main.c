#include <stdlib.h>
#include <stdio.h>


int find_min(int arr[], int n) {

    int bul_kucuk = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < bul_kucuk) 
        {
            bul_kucuk = arr[i];
        }
    }
    return bul_kucuk;
}

int main() {

    int arr[] = {6, 18, 12, 48, 49, 14};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = find_min(arr, n);

    printf("En kucuk eleman: %d", min);

    return 0;

}
