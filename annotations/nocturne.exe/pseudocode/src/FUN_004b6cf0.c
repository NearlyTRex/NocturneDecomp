// Name: FUN_004b6cf0
// Address: 004b6cf0
// Address Range: [[004b6cf0, 004b6d3f]]
// Convention: unknown
// Signature: undefined4 FUN_004b6cf0(int param_1)

#include "nocturne.h"

uint FUN_004b6cf0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1f944) != 0) {
    iVar1 = FUN_00461090(DAT_005ae704);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1f924) == 4)) {
      iVar1 = FUN_004e1660(param_1 + 0x150);
      if (*(int *)(iVar1 + 0x24) == 10) {
        return 0;
      }
    }
  }
  uVar2 = FUN_00426440(param_1);
  return uVar2;
}
