// Name: crt_unknown.c_FUN_00606e8f
// Address: 00606e8f
// Address Range: [[00606e8f, 00606e93]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606e8f()

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606e8f(void)

{
  code *pcVar1;
  float10 fVar2;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fVar2 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar2;
}


// Assembly code:
// 00606e8f: ADD ESP,0x2c
//   Label: crt_unknown.c_FUN_00606e8f
// 00606e92: INT 0x6
