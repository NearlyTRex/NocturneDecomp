// Name: FUN_005c7bea
// Address: 005c7bea
// Address Range: [[005c7bea, 005c7c0e]]
// Convention: unknown
// Signature: void FUN_005c7bea(void)

#include "nocturne.h"

void FUN_005c7bea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
