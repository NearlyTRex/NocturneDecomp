// Name: crt_math.c_FUN_00606b5b
// Address: 00606b5b
// Address Range: [[00606b5b, 00606b5f]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606b5b(void)

#include "nocturne.h"

void FUN_00606b5b(void)

{
  code *pcVar1;
  float10 in_ST1;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST1,in_ST3);
  return;
}
