// Name: crt_unknown.c_FUN_00606b7a
// Address: 00606b7a
// Address Range: [[00606b7a, 00606b7e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606b7a()

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606b7a(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  float10 in_ST1;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  Var2 = (*pcVar1)();
  crt_math_c_ieee754_divide_FUN_00606960(in_ST1,in_ST3);
  return Var2;
}


// Assembly code:
// 00606b7a: ADD ESP,0x2c
//   Label: crt_unknown.c_FUN_00606b7a
// 00606b7d: INT 0x6
