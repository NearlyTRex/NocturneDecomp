// Name: core_door.cpp_CDoor_updateCollisionData_FUN_00456460
// Address: 00456460
// Address Range: [[00456460, 00456495]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00456460(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00456460(CDoor *this_ptr)

{
  if ((g_CDemonMission_PTR_005baf90->is_in_editor == 0) &&
     (this_ptr->door_state == DOOR_STATE_CLOSED)) {
    core_door_cpp_CDoor_reposition_FUN_004552a0(this_ptr);
    core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00511a10
              (g_CDemonSet_PTR_005be368,&this_ptr->base);
    return;
  }
  return;
}
