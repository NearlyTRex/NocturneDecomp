// Name: FUN_005c795a
// Address: 005c795a
// Address Range: [[005c795a, 005c797e]]
// Convention: unknown
// Signature: void FUN_005c795a(void)

#include "nocturne.h"

void FUN_005c795a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
