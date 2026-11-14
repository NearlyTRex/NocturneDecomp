// Name: core_confedrt.cpp_CConfederate_processAnimationState_FUN_005a0fd0
// Address: 005a0fd0
// Address Range: [[005a0fd0, 005a0ff0]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processAnimationState_FUN_005a0fd0(CConfederate *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_processAnimationState_FUN_005a0fd0(CConfederate *this_ptr,float delta_time)

{
  int desired_state_index;
  
  desired_state_index = (this_ptr->base).animation_state;
  if (desired_state_index < 0) {
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,desired_state_index,1);
  return;
}
