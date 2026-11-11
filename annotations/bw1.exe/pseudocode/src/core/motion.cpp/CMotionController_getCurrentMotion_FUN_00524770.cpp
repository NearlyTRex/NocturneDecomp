// Name: core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
// Address: 00524770
// Address Range: [[00524770, 0052478d]]
// Convention: __cdecl
// Signature: SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController *this_ptr)

#include "nocturne.h"

SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController *this_ptr)

{
  return this_ptr->motion_list_ptr->motions + this_ptr->current_motion_index;
}
