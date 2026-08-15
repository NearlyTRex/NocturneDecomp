// Name: crt_unknown.c_fdiv_thunk_FUN_0056bfdb
// Address: 0056bfdb
// Address Range: [[0056bfdb, 0056bff6]]
// Convention: __fpu_thunk
// Signature: void __fpu_thunk crt_unknown_c_fdiv_thunk_FUN_0056bfdb(void)

#include "nocturne.h"

void __fpu_thunk fdiv_thunk(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  fdiv(in_ST2,in_ST3);
  return;
}
