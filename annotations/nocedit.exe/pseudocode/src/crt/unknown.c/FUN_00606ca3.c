// Name: crt_unknown.c_FUN_00606ca3
// Address: 00606ca3
// Address Range: [[00606ca3, 00606ca7]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606ca3()

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606ca3(void)

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
