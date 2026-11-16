// Name: core_basicene.cpp_CBasicEnemy_processNothingState_FUN_0059ebc0
// Address: 0059ebc0
// Address Range: [[0059ebc0, 0059ebd6]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processNothingState_FUN_0059ebc0(CBasicEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processNothingState_FUN_0059ebc0(CBasicEnemy *this_ptr)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.model.base,0,1);
  return;
}
