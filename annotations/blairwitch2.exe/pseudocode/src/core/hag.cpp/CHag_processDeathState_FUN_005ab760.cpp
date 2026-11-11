// Name: core_hag.cpp_CHag_processDeathState_FUN_005ab760
// Address: 005ab760
// Address Range: [[005ab760, 005ab780]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processDeathState_FUN_005ab760(CHag *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hag_cpp_CHag_processDeathState_FUN_005ab760(CHag *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,6,1);
  return;
}
