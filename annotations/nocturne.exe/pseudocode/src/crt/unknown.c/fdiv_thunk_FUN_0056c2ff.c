// Name: crt_unknown.c_fdiv_thunk_FUN_0056c2ff
// Address: 0056c2ff
// Address Range: [[0056c2ff, 0056c31e]]
// Convention: __fpu_thunk
// Signature: void __fpu_thunk crt_unknown_c_fdiv_thunk_FUN_0056c2ff(void)

#include "nocturne.h"

void __fpu_thunk fdiv_thunk(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  fdiv(in_ST2,in_ST3);
  return;
}
