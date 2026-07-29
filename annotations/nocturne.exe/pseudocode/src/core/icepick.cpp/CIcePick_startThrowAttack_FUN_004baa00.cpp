// Name: core_icepick.cpp_CIcePick_startThrowAttack_FUN_004baa00
// Address: 004baa00
// Address Range: [[004baa00, 004baa27]]
// Convention: __cdecl
// Signature: int __cdecl core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(CIcePick *this_ptr)

#include "nocturne.h"

int __cdecl core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(CIcePick *this_ptr)

{
  if (this_ptr->is_armed == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,0x16,1);
  return 1;
}
