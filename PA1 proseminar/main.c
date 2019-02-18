//
//  main.c
//  PA1 proseminar
//
//  Created by Frantisek Stepanek on 05/10/2018.
//  Copyright © 2018 Frantisek Stepanek. All rights reserved.
//

#include <limits.h>
int main(){
#define MIN(X,Y) ((X) < (Y) ? X : Y)
    int  a=6, b=5;
    printf("%d %d %d ",MIN(a++,b++),a,b);
    return 0;
}
