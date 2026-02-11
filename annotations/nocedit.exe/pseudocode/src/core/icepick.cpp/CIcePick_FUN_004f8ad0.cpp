// Name: core_icepick.cpp_CIcePick_FUN_004f8ad0
// Address: 004f8ad0
// Address Range: [[004f8ad0, 004f8af7]]
// Convention: __cdecl
// Signature: int __cdecl core_icepick_cpp_CIcePick_FUN_004f8ad0(CIcePick *this_ptr)

#include "nocturne.h"

int __cdecl core_icepick_cpp_CIcePick_FUN_004f8ad0(CIcePick *this_ptr)

{
  if (*(int *)(this_ptr->unk + 0x1c) == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0x16,1);
  return 1;
}
