// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_0051ab60
// Address: 0051ab60
// Address Range: [[0051ab60, 0051abee]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_0051ab60(CDemonMission *this_ptr,char *actor_name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_0051ab60(CDemonMission *this_ptr,char *actor_name)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  if (this_ptr->next_inventory_actor == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 397;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar2 = _stricmp(this_ptr->next_inventory_actor->actor_name,actor_name);
  if (iVar2 != 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 402;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!");
  }
  pCVar1 = this_ptr->next_inventory_actor;
  this_ptr->next_inventory_actor = pCVar1->next_actor;
  return pCVar1;
}
