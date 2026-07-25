// Name: FUN_0056c1b2
// Address: 0056c1b2
// Address Range: [[0056c1b2, 0056c1d6]]
// Convention: unknown
// Signature: void FUN_0056c1b2(void)

#include "nocturne.h"

void FUN_0056c1b2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
