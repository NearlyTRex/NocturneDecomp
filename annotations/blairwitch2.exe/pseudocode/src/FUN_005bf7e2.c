// Name: FUN_005bf7e2
// Address: 005bf7e2
// Address Range: [[005bf7e2, 005bf806]]
// Convention: unknown
// Signature: void FUN_005bf7e2(void)

#include "nocturne.h"

void FUN_005bf7e2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
