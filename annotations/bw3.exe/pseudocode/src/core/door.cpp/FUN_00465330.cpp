// Name: core_door.cpp_FUN_00465330
// Address: 00465330
// Address Range: [[00465330, 00465368]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00465330(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_FUN_00465330(CDemonActor *param_1)

{
  if ((*(int *)(0x01D81080 + 0x1008) == 0) && (*(int *)&param_1[2].field_0x30 == 0)) {
    core_door_cpp_FUN_00463d80(param_1);
    core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(g_CDemonSetPtr,param_1);
    return;
  }
  return;
}
