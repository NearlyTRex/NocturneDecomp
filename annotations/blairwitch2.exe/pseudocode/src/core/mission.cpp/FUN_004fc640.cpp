// Name: core_mission.cpp_FUN_004fc640
// Address: 004fc640
// Address Range: [[004fc640, 004fc6a1]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fc640(CDemonMission *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mission_cpp_FUN_004fc640(CDemonMission *param_1)

{
  int iVar1;
  CDemonSet *this_ptr;
  
  iVar1 = *(int *)(param_1 + 0x1114);
  while (iVar1 != 0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_004fc570
              (param_1,*(CDemonActor **)(param_1 + 0x1114),1);
    iVar1 = *(int *)(param_1 + 0x1114);
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(param_1);
  this_ptr = g_CDemonSetPtr;
  _DAT_01cedee0 = 0;
  *(uint *)(param_1 + 0x1450) = 0xffffffff;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00538160(this_ptr);
  *(uint *)(param_1 + 0x112c) = 0;
  return;
}
