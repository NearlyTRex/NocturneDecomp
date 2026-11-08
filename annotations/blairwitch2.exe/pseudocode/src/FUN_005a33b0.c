// Name: FUN_005a33b0
// Address: 005a33b0
// Address Range: [[005a33b0, 005a33f3]]
// Convention: unknown
// Signature: void FUN_005a33b0(int param_1)

#include "nocturne.h"

void FUN_005a33b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) != 0xb) {
    FUN_00503620(param_1 + 0x2b4,5,1);
    return;
  }
  FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
  return;
}
