// Name: core_mission.cpp_CDemonMission_FUN_004d8fc0
// Address: 004d8fc0
// Address Range: [[004d8fc0, 004d901d]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_FUN_004d8fc0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_FUN_004d8fc0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonSet *this_ptr_00;
  
  pCVar1 = this_ptr->first_actor;
  while (pCVar1 != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(this_ptr,this_ptr->first_actor,1);
    pCVar1 = this_ptr->first_actor;
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(this_ptr);
  this_ptr_00 = g_CDemonSet_PTR_005be368;
  _DAT_01cae0d4 = 0;
  this_ptr->actors_prepared = 0;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(this_ptr_00);
  this_ptr->delete_queue_count = 0;
  return;
}
