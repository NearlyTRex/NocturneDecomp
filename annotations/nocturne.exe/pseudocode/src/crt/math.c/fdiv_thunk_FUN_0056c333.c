// Name: crt_math.c_fdiv_thunk_FUN_0056c333
// Address: 0056c333
// Address Range: [[0056c333, 0056c34a]]
// Convention: __fpu_thunk
// Signature: void __fpu_thunk crt_math_c_fdiv_thunk_FUN_0056c333(void)

#include "nocturne.h"

void __fpu_thunk fdiv_thunk(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  fdiv(in_ST2,in_ST3);
  return;
}
