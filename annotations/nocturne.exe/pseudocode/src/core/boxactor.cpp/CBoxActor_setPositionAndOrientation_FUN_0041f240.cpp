// Name: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240
// Address: 0041f240
// Address Range: [[0041f240, 0041f2c2]]
// Convention: unknown
// Signature: void core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240(CBoxActor *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240(CBoxActor *param_1,float *param_2,float *param_3)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  
  (param_1->base).location.position.x = *param_2;
  (param_1->base).location.position.y = param_2[1];
  (param_1->base).location.position.z = param_2[2];
  pUVar1 = &(param_1->base).orient;
  if (pUVar1 != (UOrientationVector *)param_3) {
    (pUVar1->vec).x = *param_3;
    (param_1->base).orient.vec.y = param_3[1];
    (param_1->base).orient.vec.z = param_3[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&param_1->base);
  if (&param_1->physics_box != (CBox *)param_2) {
    (param_1->physics_box).position.x = *param_2;
    (param_1->physics_box).position.y = param_2[1];
    (param_1->physics_box).position.z = param_2[2];
  }
  pCVar2 = &(param_1->physics_box).orientation;
  if (pCVar2 != (CVector3f *)param_3) {
    pCVar2->x = *param_3;
    (param_1->physics_box).orientation.y = param_3[1];
    (param_1->physics_box).orientation.z = param_3[2];
  }
  core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(param_1);
  return;
}
