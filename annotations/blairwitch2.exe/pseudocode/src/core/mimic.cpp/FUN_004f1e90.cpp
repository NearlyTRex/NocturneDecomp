// Name: FUN_004f1e90
// Address: 004f1e90
// Address Range: [[004f1e90, 004f1ff7]]
// Convention: unknown
// Signature: int FUN_004f1e90(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f1e90(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_18 [2];
  
  if (*(int *)(param_1 + 0x4c350) == 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x4c9;
    FUN_004e4500("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = param_2 / _DAT_005f9e84 + *(float *)(param_1 + 0x4c34c);
  *(float *)(param_1 + 0x4c34c) = fVar1;
  if (1.0 <= fVar1) {
    FUN_004fcda0(0x01D182F0,*(uint *)(param_1 + 0x4c350));
    FUN_004fc200(0x01D182F0,*(uint *)(param_1 + 0x4c350));
    *(uint *)(param_1 + 0x4c350) = 0;
    iVar2 = FUN_004fc7b0(0x01D182F0,param_1,1);
  }
  else {
    local_18[0] = param_2;
    while (0.0 < local_18[0]) {
      FUN_005030c0(param_1 + 0x2b4,local_18);
    }
    local_18[0] = param_2;
    while (0.0 < local_18[0]) {
      FUN_005030c0(*(int *)(param_1 + 0x4c350) + 0x2b4,local_18);
    }
    FUN_005b7150(param_1 + 0x4b720,0,param_1 + 0x2b4,0);
    FUN_005b7150(param_1 + 0x4b720,1,*(int *)(param_1 + 0x4c350) + 0x2b4,0);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x4b774)) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(param_1 + 0x4b778) + 4 + iVar3) =
             -*(float *)(*(int *)(param_1 + 0x4b778) + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)(param_1 + 0x4b774));
      return iVar2;
    }
  }
  return iVar2;
}
