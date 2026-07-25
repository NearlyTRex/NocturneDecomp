// Name: FUN_0056c37f
// Address: 0056c37f
// Address Range: [[0056c37f, 0056c39d]]
// Convention: unknown
// Signature: void FUN_0056c37f(void)

#include "nocturne.h"

void FUN_0056c37f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
