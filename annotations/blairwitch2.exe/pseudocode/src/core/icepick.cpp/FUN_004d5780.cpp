// Name: core_icepick.cpp_FUN_004d5780
// Address: 004d5780
// Address Range: [[004d5780, 004d57a7]]
// Convention: __cdecl
// Signature: int __cdecl core_icepick_cpp_FUN_004d5780(CIcePick *this_ptr)

#include "nocturne.h"

int __cdecl core_icepick_cpp_FUN_004d5780(CIcePick *this_ptr)

{
  if (this_ptr->is_armed == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0x16,1);
  return 1;
}
