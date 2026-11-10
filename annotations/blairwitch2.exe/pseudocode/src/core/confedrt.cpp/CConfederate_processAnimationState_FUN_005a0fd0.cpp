// Name: core_confedrt.cpp_CConfederate_processAnimationState_FUN_005a0fd0
// Address: 005a0fd0
// Address Range: [[005a0fd0, 005a0ff0]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processAnimationState_FUN_005a0fd0(CConfederate *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_processAnimationState_FUN_005a0fd0(CConfederate *this_ptr,float delta_time)

{
  if (*(int *)&this_ptr->field_0x11390 < 0) {
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,*(int *)&this_ptr->field_0x11390,1);
  return;
}
