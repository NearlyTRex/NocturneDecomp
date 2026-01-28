// Name: core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
// Address: 0052dab0
// Address Range: [[0052dab0, 0052dac4]]
// Convention: __cdecl
// Signature: SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController *this_ptr)

#include "nocturne.h"

SMotion * __cdecl
core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController *this_ptr)

{
  return this_ptr->motion_list_ptr->motions + this_ptr->current_motion_index;
}
