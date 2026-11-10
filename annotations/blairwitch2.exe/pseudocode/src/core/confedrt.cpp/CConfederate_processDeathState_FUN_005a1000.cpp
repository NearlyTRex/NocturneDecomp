// Name: core_confedrt.cpp_CConfederate_processDeathState_FUN_005a1000
// Address: 005a1000
// Address Range: [[005a1000, 005a1020]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processDeathState_FUN_005a1000(CConfederate *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_processDeathState_FUN_005a1000(CConfederate *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x342c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,6,1);
  return;
}
