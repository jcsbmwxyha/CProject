#include "math.h"
int num = 20;

int myPow2(int num) { 
    return num*num; 
} 

int myPow(int n, int p) { 
<<<<<<< HEAD
    return n*p; 
=======
    int r = 1; 
    int i;
    for(i = 0; i < p; i++) {
        r *= n;
    }
 
    return r; 
>>>>>>> a5f85c4382a81ee43856e824a9ac2aa01c46d916
}
