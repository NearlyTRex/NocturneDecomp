// Name: crt_math.c_FUN_00606deb
// Address: 00606deb
// Address Range: [[00606deb, 00606def]]
// Convention: unknown
// Signature: void crt_math_c_FUN_00606deb(void)

#include "nocturne.h"

void FUN_00606deb(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
