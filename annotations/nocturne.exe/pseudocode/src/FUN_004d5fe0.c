// Name: FUN_004d5fe0
// Address: 004d5fe0
// Address Range: [[004d5fe0, 004d6005]]
// Convention: unknown
// Signature: void FUN_004d5fe0(void)

#include "nocturne.h"

void FUN_004d5fe0(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x724);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_004f5d90(iVar1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_005a0784;
  return;
}
