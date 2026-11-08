// Name: FUN_004f6330
// Address: 004f6330
// Address Range: [[004f6330, 004f63be]]
// Convention: unknown
// Signature: void FUN_004f6330(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6330(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1458) == 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x18d;
    FUN_004e4330("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar1 = FUN_005a3260(*(uint *)(param_1 + 0x1458),param_2);
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x192;
    FUN_004e4330("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",param_2,*(uint *)(param_1 + 0x1458));
  }
  *(uint *)(param_1 + 0x1458) = *(uint *)(*(int *)(param_1 + 0x1458) + 0x14c);
  return;
}
