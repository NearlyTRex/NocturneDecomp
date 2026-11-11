// Name: core_belling.cpp_CBelling_processDeathState_FUN_005a90d0
// Address: 005a90d0
// Address Range: [[005a90d0, 005a90e6]]
// Convention: __cdecl
// Signature: void __cdecl core_belling_cpp_CBelling_processDeathState_FUN_005a90d0(CBelling *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_belling_cpp_CBelling_processDeathState_FUN_005a90d0(CBelling *this_ptr,float delta_time)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.base.model.base,0,1);
  return;
}
