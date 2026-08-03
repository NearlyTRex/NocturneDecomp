// Name: core_mission.cpp_FUN_004d8fc0
// Address: 004d8fc0
// Address Range: [[004d8fc0, 004d901d]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d8fc0(CDemonMission *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004d8fc0(CDemonMission *param_1)

{
  CDemonActor *pCVar1;
  CDemonSet *this_ptr;
  
  pCVar1 = param_1->first_actor;
  while (pCVar1 != (CDemonActor *)0x0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(param_1,param_1->first_actor,1);
    pCVar1 = param_1->first_actor;
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(param_1);
  this_ptr = g_CDemonSet_PTR_005be368;
  _DAT_01cae0d4 = 0;
  param_1->actors_prepared = 0;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(this_ptr);
  param_1->delete_queue_count = 0;
  return;
}
