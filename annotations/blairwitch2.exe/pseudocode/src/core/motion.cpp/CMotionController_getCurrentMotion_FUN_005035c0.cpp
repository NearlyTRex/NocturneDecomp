// Name: core_motion.cpp_CMotionController_getCurrentMotion_FUN_005035c0
// Address: 005035c0
// Address Range: [[005035c0, 005035e2]]
// Convention: __cdecl
// Signature: SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(CMotionController *this_ptr)

#include "nocturne.h"

SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(CMotionController *this_ptr)

{
  return this_ptr->motion_list_ptr->motions + this_ptr->current_motion_index;
}
