// Name: core_xform.cpp_FUN_00586e50
// Address: 00586e50
// Address Range: [[00586e50, 00586eab]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00586e50(CEnemy *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_00586e50(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1->speed,"@Aspeed" + 2);
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1->guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  return;
}
