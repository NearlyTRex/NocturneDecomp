// Name: core_doc.cpp_FUN_004707d0
// Address: 004707d0
// Address Range: [[004707d0, 00470815]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004707d0(int param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_004707d0(int param_1)

{
  if (*(int *)(param_1 + 0x20004) == *(int *)(param_1 + 0x2628)) {
    *(uint *)(param_1 + 0x20004) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)(param_1 + 0x158),0,1);
  return;
}
