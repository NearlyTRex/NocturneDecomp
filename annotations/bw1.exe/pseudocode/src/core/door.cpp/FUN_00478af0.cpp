// Name: core_door.cpp_FUN_00478af0
// Address: 00478af0
// Address Range: [[00478af0, 00478b28]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00478af0(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_FUN_00478af0(CDemonActor *param_1)

{
  if ((*(int *)(0x01D2C900 + 0x1008) == 0) && (*(int *)&param_1[2].field_0x30 == 0)) {
    core_door_cpp_FUN_00477540(param_1);
    core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00559440(g_CDemonSetPtr,param_1);
    return;
  }
  return;
}
