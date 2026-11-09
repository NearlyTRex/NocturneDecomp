// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_0051ab60
// Address: 0051ab60
// Address Range: [[0051ab60, 0051abee]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_0051ab60(CDemonMission *this_ptr,char *actor_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_0051ab60(CDemonMission *this_ptr,char *actor_name)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  if (*(int *)(this_ptr + 0x1458) == 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x18d;
    core_main_c_FUN_005030e0("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar2 = _stricmp(*(char **)(this_ptr + 0x1458),actor_name);
  if (iVar2 != 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x192;
    core_main_c_FUN_005030e0
              ("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",actor_name,*(uint *)(this_ptr + 0x1458));
  }
  pCVar1 = *(CDemonActor **)(this_ptr + 0x1458);
  *(uint *)(this_ptr + 0x1458) = *(uint *)&pCVar1->field_0x14c;
  return pCVar1;
}
