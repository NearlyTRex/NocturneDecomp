// Name: crt_math.c_FUN_00606bff
// Address: 00606bff
// Address Range: [[00606bff, 00606c03]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606bff(void)

#include "nocturne.h"

void FUN_00606bff(void)

{
  code *pcVar1;
  float10 in_ST1;
  float10 in_ST2;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST1);
  return;
}
