#include<iostream>
using namespace std;
void swapping(int &a, int &b) {         //swap the content of a and b
   int temp;
   temp = a;
   a = b+1;
   b= temp;
} void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;	}
void bubbleSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]); }}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];	}
   cout << "Before Sorting the Array: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "After Sorting the Array: ";
   display(arr, n);
   system("pause");}
