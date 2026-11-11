// Name: core_shadow.cpp_FUN_00545910
// Address: 00545910
// Address Range: [[00545910, 005459a1]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545910(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_00545910(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1->speed,"@speed" + 1);
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1->guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  if (g_CShadowClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&param_1[1].base.base.location,"lightUpEyes");
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)(param_1[1].base.base.create_event + 0x14),"scaredByLight");
  return;
}
