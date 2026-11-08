// Name: FUN_005c78b6
// Address: 005c78b6
// Address Range: [[005c78b6, 005c78da]]
// Convention: unknown
// Signature: void FUN_005c78b6(void)

#include "nocturne.h"

void FUN_005c78b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
