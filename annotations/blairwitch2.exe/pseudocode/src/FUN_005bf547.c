// Name: FUN_005bf547
// Address: 005bf547
// Address Range: [[005bf547, 005bf561]]
// Convention: unknown
// Signature: void FUN_005bf547(void)

#include "nocturne.h"

void FUN_005bf547(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
