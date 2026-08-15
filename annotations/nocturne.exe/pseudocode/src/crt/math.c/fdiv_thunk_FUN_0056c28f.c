// Name: crt_math.c_fdiv_thunk_FUN_0056c28f
// Address: 0056c28f
// Address Range: [[0056c28f, 0056c2a6]]
// Convention: __fpu_thunk
// Signature: void __fpu_thunk crt_math_c_fdiv_thunk_FUN_0056c28f(void)

#include "nocturne.h"

void __fpu_thunk fdiv_thunk(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  fdiv(in_ST2,in_ST3);
  return;
}
