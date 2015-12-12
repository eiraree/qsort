#include <stdio.h>
#include <stdlib.h>
 
#define MAX_ELEMENTS 10
 
int quick_sort (int *fdArray) {
     
    int i = 0;
    int j = 0;
    int n = 0;
    int ind_central = 0;
    int temp = 0;
    
    ind_central = MAX_ELEMENTS / 2;
    int temp_central = *(fdArray + ind_central);
    
    i = 0;
    j = MAX_ELEMENTS - 1;
     
     while (i < j) {
        
        while (*(fdArray + i) < temp_central) 
            i++;
            temp = *(fdArray + i);
        
        while (*(fdArray + j) > temp_central) 
            j--;
    
            *(fdArray + i) = *(fdArray + j);
            *(fdArray + j) = temp;
            if (i < j) {
                i++;
                j--;
            }
     }
}


 
 
int main() {
    int i = 0;
    int n = 0;
    int unsorted[MAX_ELEMENTS] = {0};
    
    int *fdUnsorted = unsorted;
   
    for (i = 0; i < MAX_ELEMENTS; i++) {
        unsorted[i] = rand() % 100;
        printf("unsorted[%d] = %d\n", i, unsorted[i]);
    }
    
        quick_sort (fdUnsorted);
            
    for (n = 0; n < MAX_ELEMENTS; n++) {
        printf("sorted [%d] = %d\n", n, unsorted[n]);
    }
   
    return 0;
}