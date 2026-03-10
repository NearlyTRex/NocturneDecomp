// Name: core_colonel.cpp_CColonel_processMotionEvents_FUN_00440430
// Address: 00440430
// Address Range: [[00440430, 0044048d]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_processMotionEvents_FUN_00440430(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_processMotionEvents_FUN_00440430(CColonel *this_ptr,float delta_time)

{
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_0052d610
                           (&(this_ptr->base).base.model.motion_controller,&delta_time);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index);
    }
    else if ((100 < bone_index) && (bone_index != 0x65)) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index);
    }
  } while (0.0 < delta_time);
  return;
}
