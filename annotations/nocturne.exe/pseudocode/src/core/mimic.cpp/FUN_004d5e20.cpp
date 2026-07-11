// Name: FUN_004d5e20
// Address: 004d5e20
// Address Range: [[004d5e20, 004d5f87]]
// Convention: unknown
// Signature: int FUN_004d5e20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d5e20(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_18 [2];
  
  if (*(int *)(param_1 + 0x4757c) == 0) {
    _DAT_01cc4800 = "..\\core\\mimic.cpp";
    _DAT_01cc4804 = 0x4c9;
    FUN_004c8440("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = param_2 / _DAT_005a05e4 + *(float *)(param_1 + 0x47578);
  *(float *)(param_1 + 0x47578) = fVar1;
  if (1.0 <= fVar1) {
    FUN_004d9720(0x01CC9450,*(uint *)(param_1 + 0x4757c));
    FUN_004d8c60(0x01CC9450,*(uint *)(param_1 + 0x4757c));
    *(uint *)(param_1 + 0x4757c) = 0;
    iVar2 = FUN_004d9110(0x01CC9450,param_1,1);
  }
  else {
    local_18[0] = param_2;
    while (0.0 < local_18[0]) {
      FUN_004e11c0(param_1 + 0x150,local_18);
    }
    local_18[0] = param_2;
    while (0.0 < local_18[0]) {
      FUN_004e11c0(*(int *)(param_1 + 0x4757c) + 0x150,local_18);
    }
    FUN_004e0340(param_1 + 0x4694c,0,param_1 + 0x150,0);
    FUN_004e0340(param_1 + 0x4694c,1,*(int *)(param_1 + 0x4757c) + 0x150,0);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x469a0)) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(param_1 + 0x469a4) + 4 + iVar3) =
             -*(float *)(*(int *)(param_1 + 0x469a4) + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)(param_1 + 0x469a0));
      return iVar2;
    }
  }
  return iVar2;
}
