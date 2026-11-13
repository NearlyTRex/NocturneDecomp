// Name: core_door.cpp_CDoor_updateCollisionData_FUN_00465330
// Address: 00465330
// Address Range: [[00465330, 00465368]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00465330(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00465330(CDoor *this_ptr)

{
  if ((*(int *)(0x01D81080 + 0x1008) == 0) && (this_ptr->door_state == DOOR_STATE_CLOSED)) {
    core_door_cpp_CDoor_reposition_FUN_00463d80(this_ptr);
    core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(g_CDemonSetPtr,&this_ptr->base);
    return;
  }
  return;
}
