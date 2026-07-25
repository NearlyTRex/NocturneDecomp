// Name: FUN_0056c10e
// Address: 0056c10e
// Address Range: [[0056c10e, 0056c132]]
// Convention: unknown
// Signature: void FUN_0056c10e(void)

#include "nocturne.h"

void FUN_0056c10e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
