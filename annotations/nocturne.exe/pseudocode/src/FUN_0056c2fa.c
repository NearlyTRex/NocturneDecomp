// Name: FUN_0056c2fa
// Address: 0056c2fa
// Address Range: [[0056c2fa, 0056c31e]]
// Convention: unknown
// Signature: void FUN_0056c2fa(void)

#include "nocturne.h"

void FUN_0056c2fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
