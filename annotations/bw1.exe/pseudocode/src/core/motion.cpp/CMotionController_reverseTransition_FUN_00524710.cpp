// Name: core_motion.cpp_CMotionController_reverseTransition_FUN_00524710
// Address: 00524710
// Address Range: [[00524710, 0052476f]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_reverseTransition_FUN_00524710(CMotionController *this_ptr)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_reverseTransition_FUN_00524710(CMotionController *this_ptr)

{
  uint uVar1;
  
  *(uint *)&this_ptr->field_0x20 = 1;
  uVar1 = *(uint *)&this_ptr->field_0x4;
  *(uint *)&this_ptr->field_0x4 = *(uint *)&this_ptr->field_0x18;
  *(uint *)&this_ptr->field_0x18 = uVar1;
  uVar1 = *(uint *)&this_ptr->field_0x8;
  *(uint *)&this_ptr->field_0x8 = *(uint *)&this_ptr->field_0x1c;
  *(uint *)&this_ptr->field_0x1c = uVar1;
  if (*(int *)&this_ptr->field_0xc == 5) {
    *(uint *)&this_ptr->field_0xc = 4;
  }
  else if (*(int *)&this_ptr->field_0xc == 4) {
    *(uint *)&this_ptr->field_0xc = 5;
    *(float *)&this_ptr->field_0x14 = 1.0 - *(float *)&this_ptr->field_0x14;
    return;
  }
  *(float *)&this_ptr->field_0x14 = 1.0 - *(float *)&this_ptr->field_0x14;
  return;
}
