// Name: core_door.cpp_CDoor_updateCollisionData_FUN_004605e0
// Address: 004605e0
// Address Range: [[004605e0, 00460618]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_004605e0(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_004605e0(CDoor *this_ptr)

{
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) && (this_ptr->door_state == DOOR_STATE_CLOSED)) {
    core_door_cpp_FUN_0045f030(this_ptr);
    core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00538020(g_CDemonSetPtr,&this_ptr->base);
    return;
  }
  return;
}
