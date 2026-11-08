// Name: FUN_004fbc00
// Address: 004fbc00
// Address Range: [[004fbc00, 004fbc8e]]
// Convention: unknown
// Signature: void FUN_004fbc00(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fbc00(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1454) == 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x18a;
    FUN_004e4500("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar1 = FUN_005b8130(*(uint *)(param_1 + 0x1454),param_2);
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 399;
    FUN_004e4500("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",param_2,*(uint *)(param_1 + 0x1454));
  }
  *(uint *)(param_1 + 0x1454) = *(uint *)(*(int *)(param_1 + 0x1454) + 0x14c);
  return;
}
