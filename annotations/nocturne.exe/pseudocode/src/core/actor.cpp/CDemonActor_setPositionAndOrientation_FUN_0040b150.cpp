// Name: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150
// Address: 0040b150
// Address Range: [[0040b150, 0040b19f]]
// Convention: unknown
// Signature: void core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(CDemonActor *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(CDemonActor *param_1,float *param_2,float *param_3)

{
  (param_1->location).position.x = *param_2;
  (param_1->location).position.y = param_2[1];
  (param_1->location).position.z = param_2[2];
  if (&param_1->orient != (UOrientationVector *)param_3) {
    (param_1->orient).vec.x = *param_3;
    (param_1->orient).vec.y = param_3[1];
    (param_1->orient).vec.z = param_3[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  return;
}
