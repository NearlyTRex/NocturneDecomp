// Name: core_mission.cpp_FUN_004f6d70
// Address: 004f6d70
// Address Range: [[004f6d70, 004f6dd1]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004f6d70(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_004f6d70(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonSet *this_ptr_00;
  
  iVar1 = *(int *)(this_ptr + 0x143c);
  while (iVar1 != 0) {
    core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0
              (this_ptr,*(CDemonActor **)(this_ptr + 0x143c),1);
    iVar1 = *(int *)(this_ptr + 0x143c);
  }
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(this_ptr);
  this_ptr_00 = g_CDemonSetPtr;
  _DAT_01d5ba00 = 0;
  *(uint *)(this_ptr + 0x1454) = 0xffffffff;
  core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40(this_ptr_00);
  *(uint *)(this_ptr + 0x1018) = 0;
  return;
}
