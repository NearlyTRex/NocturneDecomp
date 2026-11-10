// Name: core_mobster.cpp_CMobster_startFiringAttack_FUN_0058f4a0
// Address: 0058f4a0
// Address Range: [[0058f4a0, 0058f50f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_0058f4a0(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_0058f4a0(CMobster *this_ptr)

{
  float fVar1;
  
  if (0.0 < *(float *)(this_ptr + 0xd110)) {
    return;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,1.0);
  *(float *)(this_ptr + 0xd110) = fVar1;
  if (*(int *)(this_ptr + 0x25b0) != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)(this_ptr + 0x158),6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(this_ptr + 0x158),2,1);
  return;
}
