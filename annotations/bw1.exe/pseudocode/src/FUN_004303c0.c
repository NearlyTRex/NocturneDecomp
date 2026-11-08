// Name: FUN_004303c0
// Address: 004303c0
// Address Range: [[004303c0, 0043043e]]
// Convention: unknown
// Signature: void FUN_004303c0(int param_1)

#include "nocturne.h"

void FUN_004303c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_00569f30(param_1 + 0x158);
  if (0 < *(int *)(param_1 + 0x3120)) {
    iVar2 = param_1 + 0x35dc;
    iVar3 = param_1;
    do {
      if ((*(int *)(param_1 + 0x2298 + *(int *)(iVar3 + 0x312c) * 4) != 0) &&
         (*(int *)(*(int *)(iVar3 + 0x3130) * 0x24 + iVar1 + 0x1de9c) != -1)) {
        (**(code **)(*(int *)(iVar2 + 0x154) + 0x14))(iVar2);
      }
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x2a4;
    } while (iVar4 < *(int *)(param_1 + 0x3120));
  }
  return;
}
