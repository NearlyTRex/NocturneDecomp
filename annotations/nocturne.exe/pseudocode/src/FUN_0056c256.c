// Name: FUN_0056c256
// Address: 0056c256
// Address Range: [[0056c256, 0056c27a]]
// Convention: unknown
// Signature: void FUN_0056c256(void)

#include "nocturne.h"

void FUN_0056c256(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
