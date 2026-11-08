// Name: FUN_005aa707
// Address: 005aa707
// Address Range: [[005aa707, 005aa725]]
// Convention: unknown
// Signature: void FUN_005aa707(void)

#include "nocturne.h"

void FUN_005aa707(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
