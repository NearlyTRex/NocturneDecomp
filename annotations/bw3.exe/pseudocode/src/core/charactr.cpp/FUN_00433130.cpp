// Name: core_charactr.cpp_FUN_00433130
// Address: 00433130
// Address Range: [[00433130, 0043319c]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433130(CDemonActor *param_1,uint *param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_00433130(CDemonActor *param_1,uint *param_2)

{
  SMotion *string;
  
  core_actor_cpp_FUN_00409c80(param_1,param_2);
  core_actor_cpp_crc32ProcessInt_FUN_0040d180(param_2,*(int *)&param_1[0x1b].field_0xf0);
  if (param_1[0x1b].field_0x60 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040d1c0(param_2,&param_1[0x1b].field_0x60);
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 1));
  core_actor_cpp_crc32ProcessString_FUN_0040d1c0(param_2,(char *)string);
  core_actor_cpp_crc32ProcessInt_FUN_0040d180(param_2,*(int *)&param_1[1].field_0x8);
  return;
}
