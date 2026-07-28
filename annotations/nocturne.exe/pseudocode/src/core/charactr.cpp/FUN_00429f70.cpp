// Name: core_charactr.cpp_FUN_00429f70
// Address: 00429f70
// Address Range: [[00429f70, 00429fdc]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00429f70(int param_1,uint *param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_00429f70(int param_1,uint *param_2)

{
  SMotion *string;
  
  core_actor_cpp_FUN_0040b0d0(param_1,param_2);
  core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(param_2,*(int *)(param_1 + 0x2434));
  if (*(char *)(param_1 + 0x23b0) == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040e120(param_2,(char *)(param_1 + 0x23b0));
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)(param_1 + 0x150));
  core_actor_cpp_crc32ProcessString_FUN_0040e120(param_2,string->motion_name);
  core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(param_2,*(int *)(param_1 + 0x158));
  return;
}
