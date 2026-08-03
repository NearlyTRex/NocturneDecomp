// Name: core_door.cpp_CDoor_updateCollisionData_FUN_00456460
// Address: 00456460
// Address Range: [[00456460, 00456495]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_updateCollisionData_FUN_00456460(CDoor *param_1)

#include "nocturne.h"

void core_door_cpp_CDoor_updateCollisionData_FUN_00456460(CDoor *param_1)

{
  if ((g_CDemonMission_PTR_005baf90->is_in_editor == 0) &&
     (param_1->door_state == DOOR_STATE_CLOSED)) {
    core_door_cpp_CDoor_reposition_FUN_004552a0(param_1);
    core_setcolid_cpp_FUN_00511a10(g_CDemonSet_PTR_005be368,&param_1->base);
    return;
  }
  return;
}
