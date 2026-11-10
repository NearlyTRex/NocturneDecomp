// Name: core_robin.cpp_CRobin_processDeathState_FUN_005a6720
// Address: 005a6720
// Address Range: [[005a6720, 005a673f]]
// Convention: __cdecl
// Signature: void __cdecl core_robin_cpp_CRobin_processDeathState_FUN_005a6720(CRobin *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_robin_cpp_CRobin_processDeathState_FUN_005a6720(CRobin *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x342c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  return;
}
