// Name: core_shadow.cpp_FUN_0055fe00
// Address: 0055fe00
// Address Range: [[0055fe00, 0055fe9b]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0055fe00(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0055fe00(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  if (g_CShadowClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x28,"lightUpEyes");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0xa4,"scaredByLight")
  ;
  return;
}
