// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_0051b740
// Address: 0051b740
// Address Range: [[0051b740, 0051b7a0]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(CDemonMission *this_ptr,CDemonActor *param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(CDemonMission *this_ptr,CDemonActor *param_2,uint param_3)

{
  int iVar1;
  
  this_ptr->delete_queue_actors[this_ptr->delete_queue_count] = param_2;
  this_ptr->delete_queue_flags[this_ptr->delete_queue_count] = param_3;
  iVar1 = this_ptr->delete_queue_count + 1;
  this_ptr->delete_queue_count = iVar1;
  if (iVar1 < 100) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\mission.cpp";
  _DAT_01d1d404 = 0x453;
  core_main_c_FUN_005030e0("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
