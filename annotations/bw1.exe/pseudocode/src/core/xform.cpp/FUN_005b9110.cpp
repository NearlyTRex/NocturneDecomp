// Name: core_xform.cpp_FUN_005b9110
// Address: 005b9110
// Address Range: [[005b9110, 005b916b]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b9110(CEnemy *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_005b9110(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->speed,"@speed" + 1);
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  return;
}
