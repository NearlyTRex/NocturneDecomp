// Name: core_colonel.cpp_CColonel_FUN_00440430
// Address: 00440430
// Address Range: [[00440430, 0044048d]]
// Convention: __cdecl
// Signature: int __cdecl core_colonel_cpp_CColonel_FUN_00440430(CColonel *this_ptr)

#include "nocturne.h"

int __cdecl core_colonel_cpp_CColonel_FUN_00440430(CColonel *this_ptr)

{
  uint bone_index;
  float in_stack_00000008;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_0052d610
                           (&(this_ptr->base).base.model.motion_controller,&stack0x00000008);
    if (bone_index < 100) {
      bone_index = core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40
                             ((CCharacter *)this_ptr,bone_index);
    }
    else if ((100 < bone_index) && (bone_index != 0x65)) {
      bone_index = core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40
                             ((CCharacter *)this_ptr,bone_index);
    }
  } while (0.0 < in_stack_00000008);
  return CONCAT22((short)(bone_index >> 0x10),
                  (ushort)(0.0 < in_stack_00000008) << 8 | (ushort)NAN(in_stack_00000008) << 10 |
                  (ushort)(in_stack_00000008 == 0.0) << 0xe);
}
