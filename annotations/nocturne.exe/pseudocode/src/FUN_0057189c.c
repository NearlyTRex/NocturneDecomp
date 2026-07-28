// Name: FUN_0057189c
// Address: 0057189c
// Address Range: [[0057189c, 005718c2]]
// Convention: unknown
// Signature: void FUN_0057189c(void)

#include "nocturne.h"

void FUN_0057189c(void)

{
  int iVar1;
  
  iVar1 = FUN_00571630();
  if (iVar1 != 0) {
    unregisterConsoleHandler();
    setSignalHandler(4,2);
    setSignalHandler(7,2);
  }
  return;
}
