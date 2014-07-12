//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>
void scope_me(); // declaration
int main()
{
    // func must be called in main to have an effect
    scope_me();

    return 0;
}

// implementation
void scope_me() {
    char bravo[] ="bravo";
    printf("%s\n",bravo);
}
