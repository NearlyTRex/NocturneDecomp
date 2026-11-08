// Name: FUN_005aa84f
// Address: 005aa84f
// Address Range: [[005aa84f, 005aa86d]]
// Convention: unknown
// Signature: void FUN_005aa84f(void)

#include "nocturne.h"

void FUN_005aa84f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
