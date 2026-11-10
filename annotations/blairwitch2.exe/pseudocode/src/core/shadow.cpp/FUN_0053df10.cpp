// Name: core_shadow.cpp_FUN_0053df10
// Address: 0053df10
// Address Range: [[0053df10, 0053df3c]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053df10(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4)

#include "nocturne.h"

void core_shadow_cpp_FUN_0053df10(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4)

{
  core_motion_cpp_FUN_005035c0(&param_1->model);
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_004285f0(param_1,param_2,param_3,param_4);
  return;
}
