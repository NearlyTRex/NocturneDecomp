// Name: crt_unknown.c_FUN_00606eae
// Address: 00606eae
// Address Range: [[00606eae, 00606eb2]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606eae()

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606eae(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  Var2 = (*pcVar1)();
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return Var2;
}


// Assembly code:
// 00606eae: ADD ESP,0x2c
//   Label: crt_unknown.c_FUN_00606eae
// 00606eb1: INT 0x6
