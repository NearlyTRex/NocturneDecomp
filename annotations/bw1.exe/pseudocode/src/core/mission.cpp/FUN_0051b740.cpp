// Name: FUN_0051b740
// Address: 0051b740
// Address Range: [[0051b740, 0051b7a0]]
// Convention: unknown
// Signature: void FUN_0051b740(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b740(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x1134 + *(int *)(param_1 + 0x1130) * 4) = param_2;
  *(uint *)(param_1 + 0x12c4 + *(int *)(param_1 + 0x1130) * 4) = param_3;
  iVar1 = *(int *)(param_1 + 0x1130) + 1;
  *(int *)(param_1 + 0x1130) = iVar1;
  if (iVar1 < 100) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\mission.cpp";
  _DAT_01d1d404 = 0x453;
  FUN_005030e0("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
