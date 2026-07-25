// Name: FUN_0056c0ef
// Address: 0056c0ef
// Address Range: [[0056c0ef, 0056c10d]]
// Convention: unknown
// Signature: void FUN_0056c0ef(void)

#include "nocturne.h"

void FUN_0056c0ef(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
