// Name: crt_math.c_generate_nan_FUN_00606a8c
// Address: 00606a8c
// Address Range: [[00606a8c, 00606a91]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_generate_nan_FUN_00606a8c(void)

#include "nocturne.h"

float10 crt_math_c_generate_nan_FUN_00606a8c(void)

{
  float10 in_ST0;
  
  return in_ST0 / in_ST0;
}


// Assembly code:
// 00606a8c: FDIVR ST0,ST0
//   Label: crt_math.c_generate_nan_FUN_00606a8c
// 00606a8e: ADD ESP,0x2c
// 00606a91: RET
