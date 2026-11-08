// Name: FUN_00562e60
// Address: 00562e60
// Address Range: [[00562e60, 00562f67]]
// Convention: unknown
// Signature: void FUN_00562e60(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562e60(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  FUN_00562f70(param_1,0);
  if (100 < param_2) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 200;
    FUN_005030e0("Too bony!");
  }
  *(int *)(param_1 + 0x1de78) = param_2;
  *(uint *)(param_1 + 0x1ec8c) = param_3;
  uVar1 = FUN_005c1268(*(int *)(param_1 + 0x1de78) * *(int *)(param_1 + 0x1ec8c) * 0x10);
  *(uint *)(param_1 + 0x1ec90) = uVar1;
  uVar1 = FUN_005c1268(*(int *)(param_1 + 0x1ec8c) * 0xc);
  *(uint *)(param_1 + 0x1ec94) = uVar1;
  uVar1 = FUN_005c1268(*(int *)(param_1 + 0x1ec8c) * 0xc);
  *(uint *)(param_1 + 0x1ec98) = uVar1;
  if (((*(int *)(param_1 + 0x1ec90) != 0) && (*(int *)(param_1 + 0x1ec94) != 0)) &&
     (*(int *)(param_1 + 0x1ec98) != 0)) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0xdc;
  FUN_005030e0("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",*(uint *)(param_1 + 0x1de78),
               *(uint *)(param_1 + 0x1ec8c));
  return;
}
