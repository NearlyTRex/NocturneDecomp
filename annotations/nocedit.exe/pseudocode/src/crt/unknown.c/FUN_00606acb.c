// Name: crt_unknown.c_FUN_00606acb
// Address: 00606acb
// Address Range: [[00606acb, 00606acf]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606acb()

#include "nocturne.h"

void crt_unknown_c_FUN_00606acb(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606acb: ADD ESP,0x2c
//   Label: crt_unknown.c_FUN_00606acb
// 00606ace: INT 0x6
