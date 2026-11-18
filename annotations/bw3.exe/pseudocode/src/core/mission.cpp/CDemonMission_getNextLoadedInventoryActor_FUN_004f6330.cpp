// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330
// Address: 004f6330
// Address Range: [[004f6330, 004f63be]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330(CDemonMission *this_ptr,char *actor_name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004f6330(CDemonMission *this_ptr,char *actor_name)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  if (this_ptr->next_inventory_actor == (CDemonActor *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\mission.cpp";
    g_INT_01d71de4 = 0x18d;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar2 = _stricmp(this_ptr->next_inventory_actor->actor_name,actor_name);
  if (iVar2 != 0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\mission.cpp";
    g_INT_01d71de4 = 0x192;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!");
  }
  pCVar1 = this_ptr->next_inventory_actor;
  this_ptr->next_inventory_actor = pCVar1->next_actor;
  return pCVar1;
}
