// Name: core_steuben.cpp_CSteuben_processDeathState_FUN_005a5d10
// Address: 005a5d10
// Address Range: [[005a5d10, 005a5d26]]
// Convention: __cdecl
// Signature: void __cdecl core_steuben_cpp_CSteuben_processDeathState_FUN_005a5d10(CSteuben *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_steuben_cpp_CSteuben_processDeathState_FUN_005a5d10(CSteuben *this_ptr,float delta_time)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  return;
}
