// Name: FUN_005c7807
// Address: 005c7807
// Address Range: [[005c7807, 005c7821]]
// Convention: unknown
// Signature: void FUN_005c7807(void)

#include "nocturne.h"

void FUN_005c7807(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
