// Name: FUN_005bdfe0
// Address: 005bdfe0
// Address Range: [[005bdfe0, 005be018]]
// Convention: unknown
// Signature: undefined4 FUN_005bdfe0(int param_1)

#include "nocturne.h"

uint FUN_005bdfe0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00524770(param_1 + 0x158);
  if ((*(int *)(iVar1 + 0x24) == 0xe) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  uVar2 = FUN_0042f240(param_1);
  return uVar2;
}
