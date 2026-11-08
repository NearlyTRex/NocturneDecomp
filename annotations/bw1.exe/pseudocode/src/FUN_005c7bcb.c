// Name: FUN_005c7bcb
// Address: 005c7bcb
// Address Range: [[005c7bcb, 005c7be9]]
// Convention: unknown
// Signature: void FUN_005c7bcb(void)

#include "nocturne.h"

void FUN_005c7bcb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
