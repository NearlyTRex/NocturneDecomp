// Name: FUN_005bf886
// Address: 005bf886
// Address Range: [[005bf886, 005bf8aa]]
// Convention: unknown
// Signature: void FUN_005bf886(void)

#include "nocturne.h"

void FUN_005bf886(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
