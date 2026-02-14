// Name: crt_math.c_FUN_00606e0a
// Address: 00606e0a
// Address Range: [[00606e0a, 00606e0e]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606e0a(void)

#include "nocturne.h"

void FUN_00606e0a(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
