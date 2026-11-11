// Name: core_colonel.cpp_CColonel_processMotionEvents_FUN_00436420
// Address: 00436420
// Address Range: [[00436420, 0043647d]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_processMotionEvents_FUN_00436420(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_processMotionEvents_FUN_00436420(CColonel *this_ptr,float delta_time)

{
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           (&(this_ptr->base).base.model.base,&delta_time);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
    }
    else if ((100 < bone_index) && (bone_index != 0x65)) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
    }
  } while (0.0 < delta_time);
  return;
}
