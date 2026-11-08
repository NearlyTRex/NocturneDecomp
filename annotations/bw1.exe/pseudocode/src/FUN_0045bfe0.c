// Name: FUN_0045bfe0
// Address: 0045bfe0
// Address Range: [[0045bfe0, 0045c018]]
// Convention: unknown
// Signature: undefined4 FUN_0045bfe0(int param_1)

#include "nocturne.h"

uint FUN_0045bfe0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00524770(param_1 + 0x158);
  if ((*(int *)(iVar1 + 0x24) == 0x24) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  uVar2 = FUN_0042f240(param_1);
  return uVar2;
}
