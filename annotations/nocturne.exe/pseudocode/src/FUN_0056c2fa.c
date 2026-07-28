// Name: FUN_0056c2fa
// Address: 0056c2fa
// Address Range: [[0056c2fa, 0056c31e]]
// Convention: unknown
// Signature: void FUN_0056c2fa(void)

#include "nocturne.h"

void FUN_0056c2fa(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
