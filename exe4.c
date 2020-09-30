//
//  main.c
//  exe4
//
//  Created by НУРИЯ on 9/30/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>
#include <memory.h>
#include <string.h>
void *reallocation(void *p,size_t size) {
    void *newPtr;
    if (p==NULL) {
        newPtr=malloc(size);
        if (newPtr==NULL){
            return 0;
        }
    }
    else {
        if(malloc_size(p)<size){
            newPtr=malloc(size);
            if (newPtr==NULL){
                return 0;
            }
            memcpy(newPtr, p, malloc_size(p));
            free(p);
        }
        else {
            newPtr=p;
        }
    }
    return newPtr;
}
int main() {
    printf("Enter size of initial array: ");
    int n1=0;
    scanf("%d",&n1);
    int* a1=malloc(n1 * sizeof(int));
    
    for (int i=0; i<n1; i++){
        a1[i]=100;
        printf("%d ", a1[i]);
    }
    
    int n2;
    printf("\n Enter New size of array: ");
    scanf("%d",&n2);
    a1=reallocation(a1, n2 * sizeof(int));
    
    for(int i=n1; i<n2; i++){
            a1[i] = 0;
        }

    for (int i=0; i<n2; i++){
        printf("%d ",a1[i]);
    }
    free(a1);
    exit(0);

}
