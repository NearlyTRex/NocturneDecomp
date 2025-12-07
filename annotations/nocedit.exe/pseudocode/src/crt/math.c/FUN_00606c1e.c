// Name: crt_math.c_FUN_00606c1e
// Address: 00606c1e
// Address Range: [[00606c1e, 00606c22]]
// Convention: unknown
// Signature: undefined crt_math.c_FUN_00606c1e()

#include "nocturne.h"

unkbyte10 crt_math_c_FUN_00606c1e(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  float10 in_ST1;
  float10 in_ST2;
  uint in_stack_0000004c;
  undefined6 uStack00000050;
  uint uStack00000056;
  
  pcVar1 = (code *)swi(6);
  Var2 = (*pcVar1)();
  uStack00000050 = (undefined6)Var2;
  uStack00000056 = (uint)((unkuint10)Var2 >> 0x30);
  crt_math_c_fdiv_FUN_00606960(in_ST2,in_ST1);
  return CONCAT64 /* combine 2-byte values */(uStack00000050,in_stack_0000004c);
}
