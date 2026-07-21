// Name: core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0
// Address: 004b0dc0
// Address Range: [[004b0dc0, 004b0e17]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(int param_1)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(int param_1)

{
  if ((*(int *)(param_1 + 0x2d4) == 0) && (*(int *)(param_1 + 0x2d8) == 0)) {
    *(uint *)(param_1 + 0x2d8) = 1;
    *(uint *)(param_1 + 0x2cc) = 0;
    if (*(char *)(param_1 + 0x344) != '\0') {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x344);
    }
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(0x01E57284,param_1);
  }
  return;
}
