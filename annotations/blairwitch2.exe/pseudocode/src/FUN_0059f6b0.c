// Name: FUN_0059f6b0
// Address: 0059f6b0
// Address Range: [[0059f6b0, 0059f73f]]
// Convention: unknown
// Signature: undefined4 FUN_0059f6b0(int param_1)

#include "nocturne.h"

uint FUN_0059f6b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Animation");
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10a78);
    if ((iVar1 == 0) || (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1), iVar1 < 2))
    {
      if (*(int *)(param_1 + 0x10a78) != 0) {
        return 1;
      }
    }
    else {
      *(uint *)(param_1 + 0x10a78) = 0;
    }
    uVar2 = FUN_0059db90(param_1 + 0x10af8);
    FUN_0059d8e0(param_1 + 0x10af8,uVar2);
    return 0;
  }
  return 1;
}
