// Name: core_icepick.cpp_FUN_004f1980
// Address: 004f1980
// Address Range: [[004f1980, 004f19a7]]
// Convention: __cdecl
// Signature: int __cdecl core_icepick_cpp_FUN_004f1980(CIcePick *this_ptr)

#include "nocturne.h"

int __cdecl core_icepick_cpp_FUN_004f1980(CIcePick *this_ptr)

{
  if (*(int *)&this_ptr->field_0x1ffcc == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,0x16,1);
  return 1;
}
