// Name: core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
// Address: 004e1660
// Address Range: [[004e1660, 004e1674]]
// Convention: __cdecl
// Signature: SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController *this_ptr)

#include "nocturne.h"

SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController *this_ptr)

{
  return this_ptr->motion_list_ptr->motions + this_ptr->current_motion_index;
}
