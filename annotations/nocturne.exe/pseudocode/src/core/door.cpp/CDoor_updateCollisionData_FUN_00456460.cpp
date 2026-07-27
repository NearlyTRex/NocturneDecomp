// Name: core_door.cpp_CDoor_updateCollisionData_FUN_00456460
// Address: 00456460
// Address Range: [[00456460, 00456495]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_updateCollisionData_FUN_00456460(int param_1)

#include "nocturne.h"

void core_door_cpp_CDoor_updateCollisionData_FUN_00456460(int param_1)

{
  if ((*(int *)(0x01CC9450 + 4) == 0) && (*(int *)(param_1 + 0x2d8) == 0)) {
    core_door_cpp_CDoor_reposition_FUN_004552a0(param_1);
    core_setcolid_cpp_FUN_00511a10(0x01E57284,param_1);
    return;
  }
  return;
}
