//
//  main.c
//  exe5
//
//  Created by НУРИЯ on 9/30/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
// Nuiya Umirbekova exe5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **s=malloc(sizeof(char*));
    char foo[]="Hello World\n";
    *s=foo;
    printf("s is %s\n", *s);
    *s[0]=foo[0];
    printf("s[0] is %c\n",(*s)[0]);
    exit(0);
}
