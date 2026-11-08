// Name: FUN_005aa726
// Address: 005aa726
// Address Range: [[005aa726, 005aa74a]]
// Convention: unknown
// Signature: void FUN_005aa726(void)

#include "nocturne.h"

void FUN_005aa726(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
