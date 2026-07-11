// Name: FUN_004672a0
// Address: 004672a0
// Address Range: [[004672a0, 00467325]]
// Convention: unknown
// Signature: void FUN_004672a0(int param_1)

#include "nocturne.h"

void FUN_004672a0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar4 = 0;
    for (iVar3 = 0;
        iVar3 < *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
        iVar3 = iVar3 + 1) {
      puVar2 = (uint *)(*(int *)(param_1 + 0x4c) + iVar4);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[0x15] = 0;
      if (puVar2[3] != 0) {
        uVar1 = FUN_00456f40(puVar2[3],0);
        FUN_00564494(uVar1);
      }
      iVar4 = iVar4 + 0x58;
      puVar2[3] = 0;
    }
    FUN_005638d0(*(uint *)(param_1 + 0x4c));
  }
  *(uint *)(param_1 + 0x4c) = 0;
  return;
}
