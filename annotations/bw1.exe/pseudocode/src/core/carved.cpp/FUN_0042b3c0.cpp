// Name: core_carved.cpp_FUN_0042b3c0
// Address: 0042b3c0
// Address Range: [[0042b3c0, 0042b429]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_0042b3c0(CEnemy *param_1)

#include "nocturne.h"

void core_carved_cpp_FUN_0042b3c0(CEnemy *param_1)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  model_ptr = &param_1->field_0x158;
  core_actor_cpp_FUN_0040b7f0((CDeformableModelInstance *)model_ptr,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_FUN_0040b960((CDeformableModelInstance *)model_ptr,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&param_1[1].field_0x1c,"alwaysChaseFast");
  return;
}
