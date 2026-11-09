// Name: core_mission.cpp_FUN_0051b5a0
// Address: 0051b5a0
// Address Range: [[0051b5a0, 0051b601]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_0051b5a0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_0051b5a0(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonSet *this_ptr_00;
  
  iVar1 = *(int *)(this_ptr + 0x1118);
  while (iVar1 != 0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0
              (this_ptr,*(CDemonActor **)(this_ptr + 0x1118),1);
    iVar1 = *(int *)(this_ptr + 0x1118);
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_0051b420(this_ptr);
  this_ptr_00 = g_CDemonSetPtr;
  _DAT_01d06aa0 = 0;
  *(uint *)(this_ptr + 0x1454) = 0xffffffff;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(this_ptr_00);
  *(uint *)(this_ptr + 0x1130) = 0;
  return;
}
