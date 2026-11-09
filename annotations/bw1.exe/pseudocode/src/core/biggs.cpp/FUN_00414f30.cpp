// Name: core_biggs.cpp_FUN_00414f30
// Address: 00414f30
// Address Range: [[00414f30, 00414fb3]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00414f30(CEnemy *param_1)

#include "nocturne.h"

void core_biggs_cpp_FUN_00414f30(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x17c,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x180,"morphTimer");
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0xdb0,"morphEvent");
  return;
}
