// Name: core_boxactor.cpp_CBoxActor_onDropped_FUN_0041f0f0
// Address: 0041f0f0
// Address Range: [[0041f0f0, 0041f146]]
// Convention: unknown
// Signature: void core_boxactor_cpp_CBoxActor_onDropped_FUN_0041f0f0(CBoxActor *param_1,CVector3f *param_2)

#include "nocturne.h"

void core_boxactor_cpp_CBoxActor_onDropped_FUN_0041f0f0(CBoxActor *param_1,CVector3f *param_2)

{
  CVector3f local_10;
  
  param_1->carrier_actor = (CDemonActor *)0x0;
  core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(param_1);
  if (param_2 == (CVector3f *)0x0) {
    return;
  }
  local_10.z = 0.0;
  local_10.y = 0.0;
  local_10.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40(&param_1->physics_box,param_2,&local_10);
  return;
}
