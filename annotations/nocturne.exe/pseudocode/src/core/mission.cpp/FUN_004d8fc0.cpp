// Name: core_mission.cpp_FUN_004d8fc0
// Address: 004d8fc0
// Address Range: [[004d8fc0, 004d901d]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d8fc0(CDemonMission *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004d8fc0(CDemonMission *param_1)

{
  int iVar1;
  char (*pacVar2) [256];
  CDemonSet *this_ptr;
  
  iVar1 = *(int *)(param_1->set_names[3] + 0xcc);
  while (iVar1 != 0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90
              (param_1,*(CDemonActor **)(param_1->set_names[3] + 0xcc),1);
    iVar1 = *(int *)(param_1->set_names[3] + 0xcc);
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(param_1);
  this_ptr = 0x01E57284;
  _DAT_01cae0d4 = 0;
  param_1->delete_queue_flags[0x57] = 0;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(this_ptr);
  pacVar2 = param_1->set_names;
  *(char *)((int)(pacVar2 + 3) + 0xe4) = '\0';
  *(char *)((int)(pacVar2 + 3) + 0xe5) = '\0';
  *(char *)((int)(pacVar2 + 3) + 0xe6) = '\0';
  *(char *)((int)(pacVar2 + 3) + 0xe7) = '\0';
  return;
}
