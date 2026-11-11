// Name: core_shadow.cpp_FUN_0053e860
// Address: 0053e860
// Address Range: [[0053e860, 0053e99b]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053e860(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0053e860(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(param_1->base).model,"modelName");
  if (g_CShadowClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&(param_1->base).model,"motion state");
  if (1 < g_CShadowClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].base.base.location,"lightUpEyes");
  }
  if (3 < g_CShadowClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0
              ((byte *)((int)&param_1[1].base.base.orient + 4),"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              ((byte *)((int)&param_1[1].base.base.orient + 8),"chainLength");
  }
  if (4 < g_CShadowClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),&DAT_005e675e);
  }
  if (g_CShadowClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)(param_1[1].base.base.orient_matrix.m + 1),"phase");
  core_actor_cpp_archiveFloat_FUN_0040b8e0
            (&param_1[1].base.base.orient_matrix.m[1].y,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].base.base.orient_matrix,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b9e0
            (&param_1[1].base.base.orient_matrix.m[0].y,"alpha2");
  return;
}
