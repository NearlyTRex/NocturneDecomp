// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640
// Address: 004d8640
// Address Range: [[004d8640, 004d86ce]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640(CDemonMission *this_ptr,char *actor_name)

#include "nocturne.h"

CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640(CDemonMission *this_ptr,char *actor_name)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  if (this_ptr->delete_queue_flags[0x58] == 0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x186;
    core_main_c_FUN_004c8440("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar2 = _stricmp((char *)this_ptr->delete_queue_flags[0x58],actor_name);
  if (iVar2 != 0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x18b;
    core_main_c_FUN_004c8440
              ("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",actor_name,this_ptr->delete_queue_flags[0x58]);
  }
  pCVar1 = (CDemonActor *)this_ptr->delete_queue_flags[0x58];
  this_ptr->delete_queue_flags[0x58] = (uint)pCVar1->next_actor;
  return pCVar1;
}
