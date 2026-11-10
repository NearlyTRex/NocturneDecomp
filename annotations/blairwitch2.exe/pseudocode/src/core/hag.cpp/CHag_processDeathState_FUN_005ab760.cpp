// Name: core_hag.cpp_CHag_processDeathState_FUN_005ab760
// Address: 005ab760
// Address Range: [[005ab760, 005ab780]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processDeathState_FUN_005ab760(CHag *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hag_cpp_CHag_processDeathState_FUN_005ab760(CHag *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x342c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,6,1);
  return;
}
