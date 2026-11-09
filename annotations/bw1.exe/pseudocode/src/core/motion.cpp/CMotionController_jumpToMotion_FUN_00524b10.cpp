// Name: core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10
// Address: 00524b10
// Address Range: [[00524b10, 00524b6b]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController *this_ptr,int target_motion_index,float target_frame_number)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController *this_ptr,int target_motion_index,float target_frame_number)

{
  int iVar1;
  
  if (target_frame_number == _DAT_005eaf57) {
    iVar1 = (**(code **)(*(int *)&this_ptr->field_0x50 + 4))
                      (this_ptr,*(uint *)&this_ptr->field_0x4,
                       *(uint *)&this_ptr->field_0x8,target_motion_index);
    target_frame_number = (float)iVar1;
  }
  *(uint *)&this_ptr->field_0x2c = 0;
  *(int *)&this_ptr->field_0x4 = target_motion_index;
  *(float *)&this_ptr->field_0x8 = target_frame_number;
  core_motion_cpp_CMotionController_clearTweenState_FUN_00524b70(this_ptr);
  return;
}
