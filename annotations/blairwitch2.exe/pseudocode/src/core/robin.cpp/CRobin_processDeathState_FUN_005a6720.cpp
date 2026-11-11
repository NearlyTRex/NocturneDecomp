// Name: core_robin.cpp_CRobin_processDeathState_FUN_005a6720
// Address: 005a6720
// Address Range: [[005a6720, 005a673f]]
// Convention: __cdecl
// Signature: void __cdecl core_robin_cpp_CRobin_processDeathState_FUN_005a6720(CRobin *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_robin_cpp_CRobin_processDeathState_FUN_005a6720(CRobin *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.base.model.base,0,1);
  return;
}
