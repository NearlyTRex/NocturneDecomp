// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004fbc00
// Address: 004fbc00
// Address Range: [[004fbc00, 004fbc8e]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004fbc00(CDemonMission *this_ptr,char *actor_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004fbc00(CDemonMission *this_ptr,char *actor_name)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  if (*(int *)(this_ptr + 0x1454) == 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x18a;
    core_main_c_FUN_004e4500("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar2 = _stricmp(*(char **)(this_ptr + 0x1454),actor_name);
  if (iVar2 != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 399;
    core_main_c_FUN_004e4500
              ("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",actor_name,*(uint *)(this_ptr + 0x1454));
  }
  pCVar1 = *(CDemonActor **)(this_ptr + 0x1454);
  *(uint *)(this_ptr + 0x1454) = *(uint *)&pCVar1->field_0x14c;
  return pCVar1;
}
