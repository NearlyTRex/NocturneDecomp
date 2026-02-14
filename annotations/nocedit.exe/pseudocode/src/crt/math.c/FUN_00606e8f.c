// Name: crt_math.c_FUN_00606e8f
// Address: 00606e8f
// Address Range: [[00606e8f, 00606e93]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606e8f(void)

#include "nocturne.h"

void FUN_00606e8f(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
