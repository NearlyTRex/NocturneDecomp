// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330
// Address: 004f6330
// Address Range: [[004f6330, 004f63be]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330(CDemonMission *this_ptr,char *actor_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330(CDemonMission *this_ptr,char *actor_name)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  if (*(int *)(this_ptr + 0x1458) == 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x18d;
    core_main_c_FUN_004e4330("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar2 = _stricmp(*(char **)(this_ptr + 0x1458),actor_name);
  if (iVar2 != 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x192;
    core_main_c_FUN_004e4330
              ("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",actor_name,*(uint *)(this_ptr + 0x1458));
  }
  pCVar1 = *(CDemonActor **)(this_ptr + 0x1458);
  *(uint *)(this_ptr + 0x1458) = *(uint *)&pCVar1->field_0x14c;
  return pCVar1;
}
