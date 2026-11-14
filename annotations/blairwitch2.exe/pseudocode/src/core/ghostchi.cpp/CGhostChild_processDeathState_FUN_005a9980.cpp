// Name: core_ghostchi.cpp_CGhostChild_processDeathState_FUN_005a9980
// Address: 005a9980
// Address Range: [[005a9980, 005a99e7]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processDeathState_FUN_005a9980(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_processDeathState_FUN_005a9980(CGhostChild *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  (this_ptr->base).base.base.is_spectral = 1;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,10,1);
  if (((this_ptr->base).fade_state == 0) && (0.0 < (this_ptr->base).fade_val)) {
    core_basicene_cpp_FUN_005a01a0(this_ptr,(this_ptr->base).fade_val,0,0x400ccccd);
    core_basicene_cpp_FUN_0059f570(this_ptr);
    return;
  }
  return;
}
