// Name: core_door.cpp_FUN_004605e0
// Address: 004605e0
// Address Range: [[004605e0, 00460618]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_004605e0(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_FUN_004605e0(CDemonActor *param_1)

{
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) && (*(int *)&param_1[1].field_0x188 == 0)) {
    core_door_cpp_FUN_0045f030(param_1);
    core_setcolid_cpp_FUN_00538020(g_CDemonSetPtr,param_1);
    return;
  }
  return;
}
