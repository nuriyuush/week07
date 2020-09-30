//
//  main.c
//  exe2
//
//  Created by НУРИЯ on 10/1/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Enter size of array:\n");
    int n1;
    scanf("%d", &n1);
    int* a1=malloc(n1 * sizeof(int));
    for(int i=0; i<n1; i++){
        a1[i]=i;
    }
    for(int i=0; i<n1; i++ ) {
        printf("%d \n", a1[i]);
    }
    free(a1);
    exit(0);
}
