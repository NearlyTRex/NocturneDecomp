// Name: FUN_0051ab60
// Address: 0051ab60
// Address Range: [[0051ab60, 0051abee]]
// Convention: unknown
// Signature: void FUN_0051ab60(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ab60(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1458) == 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x18d;
    FUN_005030e0("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar1 = FUN_005c04e0(*(uint *)(param_1 + 0x1458),param_2);
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x192;
    FUN_005030e0("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",param_2,*(uint *)(param_1 + 0x1458));
  }
  *(uint *)(param_1 + 0x1458) = *(uint *)(*(int *)(param_1 + 0x1458) + 0x14c);
  return;
}
