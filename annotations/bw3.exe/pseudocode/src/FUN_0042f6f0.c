// Name: FUN_0042f6f0
// Address: 0042f6f0
// Address Range: [[0042f6f0, 0042f76e]]
// Convention: unknown
// Signature: void FUN_0042f6f0(int param_1)

#include "nocturne.h"

void FUN_0042f6f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_0054eac0(param_1 + 0x158);
  if (0 < *(int *)(param_1 + 0x33a0)) {
    iVar2 = param_1 + 0x385c;
    iVar3 = param_1;
    do {
      if ((*(int *)(param_1 + 0x2298 + *(int *)(iVar3 + 0x33ac) * 4) != 0) &&
         (*(int *)(*(int *)(iVar3 + 0x33b0) * 0x24 + iVar1 + 0x1de9c) != -1)) {
        (**(code **)(*(int *)(iVar2 + 0x154) + 0x14))(iVar2);
      }
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x2a4;
    } while (iVar4 < *(int *)(param_1 + 0x33a0));
  }
  return;
}
