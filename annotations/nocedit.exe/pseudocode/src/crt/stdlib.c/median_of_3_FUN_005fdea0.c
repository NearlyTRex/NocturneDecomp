// Name: crt_stdlib.c_median_of_3_FUN_005fdea0
// Address: 005fdea0
// Address Range: [[005fdea0, 005fdf0f]]
// Convention: __watcallStack
// Signature: void * crt_stdlib.c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar)

#include "nocturne.h"

void * __watcallStack
crt_stdlib_c_median_of_3_FUN_005fdea0(void *a,void *b,void *c,QSORT_COMPARATOR compar)

{
  int iVar1;
  void *in_stack_00000018;
  void *in_stack_00000020;
  
  iVar1 = (*compar)(a,b);
  if (iVar1 < 1) {
    iVar1 = (*compar)(a,c);
    if (-1 < iVar1) {
      return a;
    }
    iVar1 = (*compar)(in_stack_00000018,c);
    if (0 < iVar1) {
      return c;
    }
  }
  else {
    iVar1 = (*compar)(a,c);
    if (iVar1 < 1) {
      return a;
    }
    iVar1 = (*compar)(in_stack_00000018,c);
    if (iVar1 < 1) {
      return c;
    }
  }
  return in_stack_00000020;
}
