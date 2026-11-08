// Name: FUN_0040e680
// Address: 0040e680
// Address Range: [[0040e680, 0040e7a4]]
// Convention: unknown
// Signature: void FUN_0040e680(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e680(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  byte auStack_48 [4];
  uint uStack_44;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0x2d4);
  iVar1 = _DAT_01d06ab4;
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x33c) = 1;
    iVar1 = *(int *)(iVar1 * 4 + 0x1d06aa4);
    *(uint *)(param_1 + 0x20) = *(uint *)(iVar1 + 0x20);
    *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
    *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
    *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x338) + *(float *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x33c) != 0) {
    fVar2 = *(float *)(param_1 + 0x340) - param_2 * (float)_DAT_005d327f;
    *(float *)(param_1 + 0x340) = fVar2;
    iVar1 = _DAT_01d06ab4;
    *(float *)(param_1 + 0x24) = fVar2 + *(float *)(param_1 + 0x24);
    iVar1 = *(int *)(iVar1 * 4 + 0x1d06aa4);
    if (*(float *)(param_1 + 0x24) < *(float *)(iVar1 + 0x24)) {
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
      *(uint *)(param_1 + 0x340) = 0;
    }
    if (*(float *)(param_1 + 0x24) <
        *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24) + (float)_DAT_005d3287) {
      FUN_0042c010(auStack_48);
      uStack_44 = 0x461c3f9a;
      uStack_18 = 8;
      iStack_14 = param_1;
      iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iStack_10 = param_1;
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x108))(iVar1,auStack_48);
      return;
    }
  }
  return;
}
