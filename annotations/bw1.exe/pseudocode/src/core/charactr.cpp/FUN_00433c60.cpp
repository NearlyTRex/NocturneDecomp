// Name: core_charactr.cpp_FUN_00433c60
// Address: 00433c60
// Address Range: [[00433c60, 00433ccc]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433c60(CDemonActor *param_1,uint *param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_00433c60(CDemonActor *param_1,uint *param_2)

{
  SMotion *string;
  
  core_actor_cpp_FUN_00409c40(param_1,param_2);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf40(param_2,*(int *)&param_1[0x1b].field_0xf0);
  if (param_1[0x1b].field_0x60 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040cf80(param_2,&param_1[0x1b].field_0x60);
  string = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)(param_1 + 1));
  core_actor_cpp_crc32ProcessString_FUN_0040cf80(param_2,(char *)string);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf40(param_2,*(int *)&param_1[1].field_0x8);
  return;
}
