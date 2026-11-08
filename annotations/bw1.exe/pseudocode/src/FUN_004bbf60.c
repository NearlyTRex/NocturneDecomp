// Name: FUN_004bbf60
// Address: 004bbf60
// Address Range: [[004bbf60, 004bbfc4]]
// Convention: unknown
// Signature: void FUN_004bbf60(int param_1)

#include "nocturne.h"

void FUN_004bbf60(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      if (*(int *)(iVar3 + 0x154) != 0) {
        uVar1 = FUN_004bbcf0(*(int *)(iVar3 + 0x154),0);
        FUN_005c0344(uVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  *(uint *)(param_1 + 0x140) = 0;
  *(uint *)(param_1 + 0x144) = 0;
  *(uint *)(param_1 + 0x150) = 0;
  return;
}
