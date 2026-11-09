// Name: core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
// Address: 004fc070
// Address Range: [[004fc070, 004fc08d]]
// Convention: __cdecl
// Signature: SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController *this_ptr)

#include "nocturne.h"

SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController *this_ptr)

{
  return (SMotion *)(*(int *)&this_ptr->field_0x4 * 0x120 + *(int *)this_ptr + 0x1c28);
}
