// Name: crt_math.c_FUN_00606cc2
// Address: 00606cc2
// Address Range: [[00606cc2, 00606cc6]]
// Convention: unknown
// Signature: unkbyte10 crt_math_c_FUN_00606cc2(void)

#include "nocturne.h"

unkbyte10 FUN_00606cc2(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  float10 in_ST2;
  float10 in_ST3;
  uint in_stack_0000004c;
  undefined6 uStack00000050;
  uint uStack00000056;
  
  pcVar1 = (code *)swi(6);
  Var2 = (*pcVar1)();
  uStack00000050 = (undefined6)Var2;
  uStack00000056 = (uint)((unkuint10)Var2 >> 0x30);
  fdiv(in_ST2,in_ST3);
  return CONCAT64(uStack00000050,in_stack_0000004c);
}
