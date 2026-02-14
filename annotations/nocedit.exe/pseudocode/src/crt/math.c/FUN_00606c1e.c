// Name: crt_math.c_FUN_00606c1e
// Address: 00606c1e
// Address Range: [[00606c1e, 00606c22]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606c1e(void)

#include "nocturne.h"

void FUN_00606c1e(void)

{
  code *pcVar1;
  float10 in_ST1;
  float10 in_ST2;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST1);
  return;
}
