// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
// Address: 00523520
// Address Range: [[00523520, 005235ae]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission *this_ptr,char *actor_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission *this_ptr,char *actor_name)

{
  int iVar1;
  
  if (this_ptr->next_inventory_actor == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x186;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar1 = _stricmp(this_ptr->next_inventory_actor->actor_name,actor_name);
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x18b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",actor_name,this_ptr->next_inventory_actor);
  }
  this_ptr->next_inventory_actor = this_ptr->next_inventory_actor->next_actor;
  return;
}
