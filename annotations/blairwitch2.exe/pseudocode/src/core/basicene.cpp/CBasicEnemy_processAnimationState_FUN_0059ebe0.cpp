// Name: core_basicene.cpp_CBasicEnemy_processAnimationState_FUN_0059ebe0
// Address: 0059ebe0
// Address Range: [[0059ebe0, 0059ec00]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processAnimationState_FUN_0059ebe0(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processAnimationState_FUN_0059ebe0(CBasicEnemy *this_ptr,float delta_time)

{
  if (*(int *)(this_ptr + 0x11390) < 0) {
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(this_ptr + 0x2b4),*(int *)(this_ptr + 0x11390),1);
  return;
}
