// Name: core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0
// Address: 0051b5a0
// Address Range: [[0051b5a0, 0051b601]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeAllActors_FUN_0051b5a0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_removeAllActors_FUN_0051b5a0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *this_ptr_00;
  
  pCVar1 = this_ptr->first_actor;
  while (pCVar1 != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0(this_ptr,this_ptr->first_actor,1);
    pCVar1 = this_ptr->first_actor;
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(this_ptr);
  this_ptr_00 = g_CDemonSetPtr;
  _DAT_01d06aa0 = 0;
  this_ptr->prepared_set_index = -1;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(this_ptr_00);
  this_ptr->delete_queue_count = 0;
  return;
}
