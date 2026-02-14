// Name: crt_math.c_FUN_00606b7a
// Address: 00606b7a
// Address Range: [[00606b7a, 00606b7e]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606b7a(void)

#include "nocturne.h"

void FUN_00606b7a(void)

{
  code *pcVar1;
  float10 in_ST1;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST1,in_ST3);
  return;
}
