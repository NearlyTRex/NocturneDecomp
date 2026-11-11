// Name: core_searpart.cpp_CSearchParty_processDeathState_FUN_005a8e20
// Address: 005a8e20
// Address Range: [[005a8e20, 005a8e36]]
// Convention: __cdecl
// Signature: void __cdecl core_searpart_cpp_CSearchParty_processDeathState_FUN_005a8e20(CSearchParty *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_searpart_cpp_CSearchParty_processDeathState_FUN_005a8e20(CSearchParty *this_ptr,float delta_time)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.base.model.base,0,1);
  return;
}
