// Name: crt_math.c_FUN_00606cc2
// Address: 00606cc2
// Address Range: [[00606cc2, 00606cc6]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606cc2(void)

#include "nocturne.h"

void FUN_00606cc2(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
