// Name: FUN_0056c06a
// Address: 0056c06a
// Address Range: [[0056c06a, 0056c08e]]
// Convention: unknown
// Signature: void FUN_0056c06a(void)

#include "nocturne.h"

void FUN_0056c06a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
