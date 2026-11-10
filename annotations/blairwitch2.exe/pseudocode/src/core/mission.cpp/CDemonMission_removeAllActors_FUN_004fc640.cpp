// Name: core_mission.cpp_CDemonMission_removeAllActors_FUN_004fc640
// Address: 004fc640
// Address Range: [[004fc640, 004fc6a1]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeAllActors_FUN_004fc640(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_removeAllActors_FUN_004fc640(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonSet *this_ptr_00;
  
  iVar1 = *(int *)(this_ptr + 0x1114);
  while (iVar1 != 0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_004fc570
              (this_ptr,*(CDemonActor **)(this_ptr + 0x1114),1);
    iVar1 = *(int *)(this_ptr + 0x1114);
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(this_ptr);
  this_ptr_00 = g_CDemonSetPtr;
  _DAT_01cedee0 = 0;
  *(uint *)(this_ptr + 0x1450) = 0xffffffff;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00538160(this_ptr_00);
  *(uint *)(this_ptr + 0x112c) = 0;
  return;
}
