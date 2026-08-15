// Name: crt_unknown.c_fdiv_thunk_FUN_0056c1b7
// Address: 0056c1b7
// Address Range: [[0056c1b7, 0056c1d6]]
// Convention: __fpu_thunk
// Signature: void __fpu_thunk crt_unknown_c_fdiv_thunk_FUN_0056c1b7(void)

#include "nocturne.h"

void __fpu_thunk fdiv_thunk(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  fdiv(in_ST2,in_ST3);
  return;
}
