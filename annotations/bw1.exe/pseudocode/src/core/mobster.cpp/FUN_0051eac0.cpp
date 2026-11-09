// Name: core_mobster.cpp_FUN_0051eac0
// Address: 0051eac0
// Address Range: [[0051eac0, 0051eb2f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_0051eac0(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_FUN_0051eac0(CMobster *this_ptr)

{
  uint uVar1;
  
  if (0.0 < *(float *)&this_ptr->field_0xc33c) {
    return;
  }
  uVar1 = core_actor_cpp_FUN_0040cc00(0x3f000000,0x3f800000);
  *(uint *)&this_ptr->field_0xc33c = uVar1;
  if (*(int *)&this_ptr->field_0x25b0 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,2,1);
  return;
}
