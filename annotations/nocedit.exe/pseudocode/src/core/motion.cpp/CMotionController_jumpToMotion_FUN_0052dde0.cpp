// Name: core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
// Address: 0052dde0
// Address Range: [[0052dde0, 0052de3b]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
          (CMotionController *this_ptr,int target_motion_index,float target_frame_number)

{
  int iVar1;
  uint uStack00000014;
  int in_stack_0000002c;
  float in_stack_00000030;
  
  if (target_frame_number == -1f) {
    iVar1 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                       target_motion_index);
    in_stack_00000030 = (float)iVar1;
  }
  this_ptr->in_transition = 0;
  this_ptr->current_motion_index = in_stack_0000002c;
  this_ptr->current_frame_number = in_stack_00000030;
  uStack00000014 = 0x52de12;
  core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(this_ptr);
  return;
}
