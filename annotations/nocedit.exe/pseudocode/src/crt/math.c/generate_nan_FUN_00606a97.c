// Name: crt_math.c_generate_nan_FUN_00606a97
// Address: 00606a97
// Address Range: [[00606a97, 00606a9c]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_generate_nan_FUN_00606a97(void)

#include "nocturne.h"

float10 crt_math_c_generate_nan_FUN_00606a97(void)

{
  float10 in_ST0;
  
  return in_ST0 / in_ST0;
}


// Assembly code:
// 00606a97: FDIV ST0,ST0
//   Label: crt_math.c_generate_nan_FUN_00606a97
// 00606a99: ADD ESP,0x2c
// 00606a9c: RET
