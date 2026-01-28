// Name: crt_math.c_FUN_00606bff
// Address: 00606bff
// Address Range: [[00606bff, 00606c03]]
// Convention: unknown
// Signature: float10 crt_math_c_FUN_00606bff(void)

#include "nocturne.h"

float10 crt_math_c_FUN_00606bff(void)

{
  code *pcVar1;
  float10 fVar2;
  float10 in_ST1;
  float10 in_ST2;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fVar2 = crt_math_c_fdiv_FUN_00606960(in_ST2,in_ST1);
  return fVar2;
}
