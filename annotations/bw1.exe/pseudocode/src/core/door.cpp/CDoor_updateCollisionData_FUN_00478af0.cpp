// Name: core_door.cpp_CDoor_updateCollisionData_FUN_00478af0
// Address: 00478af0
// Address Range: [[00478af0, 00478b28]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00478af0(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00478af0(CDoor *this_ptr)

{
  if ((*(int *)(0x01D2C900 + 0x1008) == 0) && (this_ptr->door_state == DOOR_STATE_CLOSED)) {
    core_door_cpp_FUN_00477540(this_ptr);
    core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00559440(g_CDemonSetPtr,&this_ptr->base);
    return;
  }
  return;
}
