// Name: crt_unknown.c_FUN_00606d66
// Address: 00606d66
// Address Range: [[00606d66, 00606d6a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606d66()

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606d66(void)

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
