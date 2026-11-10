// Name: core_shadow.cpp_FUN_00544fd0
// Address: 00544fd0
// Address Range: [[00544fd0, 00544ffc]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00544fd0(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4)

#include "nocturne.h"

void core_shadow_cpp_FUN_00544fd0(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4)

{
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(param_1->model).base);
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00431470(param_1,param_2,param_3,param_4);
  return;
}
