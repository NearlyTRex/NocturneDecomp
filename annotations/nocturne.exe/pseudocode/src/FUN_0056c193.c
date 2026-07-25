// Name: FUN_0056c193
// Address: 0056c193
// Address Range: [[0056c193, 0056c1b1]]
// Convention: unknown
// Signature: void FUN_0056c193(void)

#include "nocturne.h"

void FUN_0056c193(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
