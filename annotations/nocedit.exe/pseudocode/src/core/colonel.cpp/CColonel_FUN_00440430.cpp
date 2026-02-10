// Name: core_colonel.cpp_CColonel_FUN_00440430
// Address: 00440430
// Address Range: [[00440430, 0044048d]]
// Convention: __cdecl
// Signature: int __cdecl core_colonel_cpp_CColonel_FUN_00440430(CColonel *this_ptr)

#include "nocturne.h"

int __cdecl core_colonel_cpp_CColonel_FUN_00440430(CColonel *this_ptr)

{
  uint event_id;
  float in_stack_00000008;
  
  do {
    event_id = core_motion_cpp_CMotionController_advance_FUN_0052d610
                         (&(this_ptr->base).base.model.motion_controller);
    if (event_id < 100) {
      event_id = core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40
                           ((CCharacter *)this_ptr,event_id);
    }
    else if ((100 < event_id) && (event_id != 0x65)) {
      event_id = core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40
                           ((CCharacter *)this_ptr,event_id);
    }
  } while (0.0 < in_stack_00000008);
  return CONCAT22((short)(event_id >> 0x10),
                  (ushort)(0.0 < in_stack_00000008) << 8 | (ushort)NAN(in_stack_00000008) << 10 |
                  (ushort)(in_stack_00000008 == 0.0) << 0xe);
}
