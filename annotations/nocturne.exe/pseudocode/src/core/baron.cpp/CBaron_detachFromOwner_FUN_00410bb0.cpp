// Name: core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0
// Address: 00410bb0
// Address Range: [[00410bb0, 00410be7]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(int param_1,int param_2)

{
  if ((param_2 == *(int *)(param_1 + 0x1fb14)) && (*(int *)(param_1 + 0x1fb14) != 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,7,1);
    *(uint *)(param_1 + 0x1fb14) = 0;
    return;
  }
  return;
}
