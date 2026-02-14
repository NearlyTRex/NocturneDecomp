// Name: crt_math.c_FUN_00606d47
// Address: 00606d47
// Address Range: [[00606d47, 00606d4b]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606d47(void)

#include "nocturne.h"

void FUN_00606d47(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
