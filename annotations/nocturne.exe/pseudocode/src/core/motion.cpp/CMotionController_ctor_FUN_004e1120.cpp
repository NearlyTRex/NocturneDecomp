// Name: core_motion.cpp_CMotionController_ctor_FUN_004e1120
// Address: 004e1120
// Address Range: [[004e1120, 004e1142]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004e1120(undefined4 *param_1)

#include "nocturne.h"

uint * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004e1120(uint *param_1)

{
  param_1[0x14] = &PTR_core_motion_cpp_CMotionController_dtor_FUN_004e1150_005a0d24;
  *(byte *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  core_motion_cpp_CMotionController_reset_FUN_004e1680(param_1);
  return param_1;
}
