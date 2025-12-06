// Name: crt_unknown.c_FUN_00606e0a
// Address: 00606e0a
// Address Range: [[00606e0a, 00606e0e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606e0a()

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606e0a(void)

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
