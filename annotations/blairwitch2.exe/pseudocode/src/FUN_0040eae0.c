// Name: FUN_0040eae0
// Address: 0040eae0
// Address Range: [[0040eae0, 0040ec04]]
// Convention: unknown
// Signature: void FUN_0040eae0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040eae0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  byte auStack_48 [4];
  uint uStack_44;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x430);
  iVar1 = _DAT_01cedef4;
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x498) = 1;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cedee4);
    *(uint *)(param_1 + 0x20) = *(uint *)(iVar1 + 0x20);
    *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
    *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
    *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x494) + *(float *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x498) != 0) {
    fVar2 = *(float *)(param_1 + 0x49c) - param_2 * (float)_DAT_005cb314;
    *(float *)(param_1 + 0x49c) = fVar2;
    iVar1 = _DAT_01cedef4;
    *(float *)(param_1 + 0x24) = fVar2 + *(float *)(param_1 + 0x24);
    iVar1 = *(int *)(iVar1 * 4 + 0x1cedee4);
    if (*(float *)(param_1 + 0x24) < *(float *)(iVar1 + 0x24)) {
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
      *(uint *)(param_1 + 0x49c) = 0;
    }
    if (*(float *)(param_1 + 0x24) <
        *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24) + (float)_DAT_005cb31c) {
      FUN_004222d0(auStack_48);
      uStack_44 = 0x461c3f9a;
      uStack_18 = 8;
      iStack_14 = param_1;
      iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iStack_10 = param_1;
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,auStack_48);
      return;
    }
  }
  return;
}
