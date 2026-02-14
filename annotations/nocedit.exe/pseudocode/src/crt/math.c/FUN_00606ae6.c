// Name: crt_math.c_FUN_00606ae6
// Address: 00606ae6
// Address Range: [[00606ae6, 00606aea]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606ae6(void)

#include "nocturne.h"

void FUN_00606ae6(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
