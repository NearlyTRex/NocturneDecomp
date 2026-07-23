// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640
// Address: 004d8640
// Address Range: [[004d8640, 004d86ce]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x854) == 0) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0x186;
    FUN_004c8440("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar1 = _stricmp(*(uint *)(param_1 + 0x854),param_2);
  if (iVar1 != 0) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0x18b;
    FUN_004c8440("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",param_2,*(uint *)(param_1 + 0x854));
  }
  *(uint *)(param_1 + 0x854) = *(uint *)(*(int *)(param_1 + 0x854) + 0x144);
  return;
}
