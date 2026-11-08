// Name: FUN_005bf5d7
// Address: 005bf5d7
// Address Range: [[005bf5d7, 005bf5f5]]
// Convention: unknown
// Signature: void FUN_005bf5d7(void)

#include "nocturne.h"

void FUN_005bf5d7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
