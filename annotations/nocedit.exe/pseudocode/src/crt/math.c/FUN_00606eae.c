// Name: crt_math.c_FUN_00606eae
// Address: 00606eae
// Address Range: [[00606eae, 00606eb2]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606eae(void)

#include "nocturne.h"

void FUN_00606eae(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
