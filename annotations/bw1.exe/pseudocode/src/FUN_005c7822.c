// Name: FUN_005c7822
// Address: 005c7822
// Address Range: [[005c7822, 005c7842]]
// Convention: unknown
// Signature: void FUN_005c7822(void)

#include "nocturne.h"

void FUN_005c7822(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
