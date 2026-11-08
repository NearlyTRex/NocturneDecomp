// Name: FUN_005aa86e
// Address: 005aa86e
// Address Range: [[005aa86e, 005aa892]]
// Convention: unknown
// Signature: void FUN_005aa86e(void)

#include "nocturne.h"

void FUN_005aa86e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
