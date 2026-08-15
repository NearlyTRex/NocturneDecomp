// Name: crt_unknown.c_fdiv_thunk_FUN_0056c06f
// Address: 0056c06f
// Address Range: [[0056c06f, 0056c08e]]
// Convention: __fpu_thunk
// Signature: void __fpu_thunk crt_unknown_c_fdiv_thunk_FUN_0056c06f(void)

#include "nocturne.h"

void __fpu_thunk fdiv_thunk(void)

{
  float10 in_ST1;
  float10 in_ST3;
  
  fdiv(in_ST1,in_ST3);
  return;
}
