// Name: core_mobster.cpp_FUN_004ffb00
// Address: 004ffb00
// Address Range: [[004ffb00, 004ffb6f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_004ffb00(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_FUN_004ffb00(CMobster *this_ptr)

{
  uint uVar1;
  
  if (0.0 < *(float *)&this_ptr->field_0x10bcc) {
    return;
  }
  uVar1 = core_actor_cpp_FUN_0040cf60(0x3f000000,0x3f800000);
  *(uint *)&this_ptr->field_0x10bcc = uVar1;
  if (*(int *)&this_ptr->field_0x2620 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,2,1);
  return;
}
