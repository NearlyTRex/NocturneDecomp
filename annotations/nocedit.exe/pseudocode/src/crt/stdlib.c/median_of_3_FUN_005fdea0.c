// Name: crt_stdlib.c_median_of_3_FUN_005fdea0
// Address: 005fdea0
// Address Range: [[005fdea0, 005fdf0f]]
// Convention: __watcallStack
// Signature: void * __watcallStack crt_stdlib_c_median_of_3_FUN_005fdea0(void *a,void *b,void *c,QSORT_COMPARATOR compar)

#include "nocturne.h"

void * __watcallStack median_of_3(void *a,void *b,void *c,QSORT_COMPARATOR compar)

{
  int iVar1;
  
  iVar1 = (*compar)(a,b);
  if (iVar1 < 1) {
    iVar1 = (*compar)(a,c);
    if (-1 < iVar1) {
      return a;
    }
    iVar1 = (*compar)(b,c);
    if (0 < iVar1) {
      return c;
    }
  }
  else {
    iVar1 = (*compar)(a,c);
    if (iVar1 < 1) {
      return a;
    }
    iVar1 = (*compar)(b,c);
    if (iVar1 < 1) {
      return c;
    }
  }
  return b;
}
