// Name: FUN_00540870
// Address: 00540870
// Address Range: [[00540870, 00540977]]
// Convention: unknown
// Signature: void FUN_00540870(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540870(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  FUN_00540980(param_1,0);
  if (100 < param_2) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 199;
    FUN_004e4500("Too bony!");
  }
  *(int *)(param_1 + 0x1d1f8) = param_2;
  *(uint *)(param_1 + 0x1e00c) = param_3;
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 0x1d1f8) * *(int *)(param_1 + 0x1e00c) * 0x10);
  *(uint *)(param_1 + 0x1e010) = uVar1;
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 0x1e00c) * 0xc);
  *(uint *)(param_1 + 0x1e014) = uVar1;
  uVar1 = FUN_005b8df8(*(int *)(param_1 + 0x1e00c) * 0xc);
  *(uint *)(param_1 + 0x1e018) = uVar1;
  if (((*(int *)(param_1 + 0x1e010) != 0) && (*(int *)(param_1 + 0x1e014) != 0)) &&
     (*(int *)(param_1 + 0x1e018) != 0)) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0xdb;
  FUN_004e4500("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",*(uint *)(param_1 + 0x1d1f8),
               *(uint *)(param_1 + 0x1e00c));
  return;
}
