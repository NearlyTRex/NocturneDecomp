// Name: FUN_0056c39e
// Address: 0056c39e
// Address Range: [[0056c39e, 0056c3c2]]
// Convention: unknown
// Signature: void FUN_0056c39e(void)

#include "nocturne.h"

void FUN_0056c39e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
