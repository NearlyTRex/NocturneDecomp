// Name: FUN_005bf90b
// Address: 005bf90b
// Address Range: [[005bf90b, 005bf929]]
// Convention: unknown
// Signature: void FUN_005bf90b(void)

#include "nocturne.h"

void FUN_005bf90b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
