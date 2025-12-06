// Name: crt_unknown.c_FUN_00606c1e
// Address: 00606c1e
// Address Range: [[00606c1e, 00606c22]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606c1e()

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606c1e(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  float10 in_ST1;
  float10 in_ST2;
  
  pcVar1 = (code *)swi(6);
  Var2 = (*pcVar1)();
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST1);
  return Var2;
}
