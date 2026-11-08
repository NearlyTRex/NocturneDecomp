// Name: FUN_005c7897
// Address: 005c7897
// Address Range: [[005c7897, 005c78b5]]
// Convention: unknown
// Signature: void FUN_005c7897(void)

#include "nocturne.h"

void FUN_005c7897(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
