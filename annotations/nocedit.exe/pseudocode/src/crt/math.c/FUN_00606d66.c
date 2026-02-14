// Name: crt_math.c_FUN_00606d66
// Address: 00606d66
// Address Range: [[00606d66, 00606d6a]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606d66(void)

#include "nocturne.h"

void FUN_00606d66(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
