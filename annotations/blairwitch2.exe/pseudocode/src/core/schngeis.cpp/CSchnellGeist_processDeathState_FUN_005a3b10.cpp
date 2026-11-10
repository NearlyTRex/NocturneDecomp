// Name: core_schngeis.cpp_CSchnellGeist_processDeathState_FUN_005a3b10
// Address: 005a3b10
// Address Range: [[005a3b10, 005a3b26]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processDeathState_FUN_005a3b10(CSchnellGeist *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_schngeis_cpp_CSchnellGeist_processDeathState_FUN_005a3b10(CSchnellGeist *this_ptr,float delta_time)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,7,1);
  return;
}
