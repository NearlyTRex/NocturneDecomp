// Name: core_shadow.cpp_FUN_00544fd0
// Address: 00544fd0
// Address Range: [[00544fd0, 00544ffc]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00544fd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void core_shadow_cpp_FUN_00544fd0(int param_1,uint param_2,uint param_3,uint param_4)

{
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
            ((CMotionController *)(param_1 + 0x158));
  core_charactr_cpp_FUN_00431470(param_1,param_2,param_3,param_4);
  return;
}
