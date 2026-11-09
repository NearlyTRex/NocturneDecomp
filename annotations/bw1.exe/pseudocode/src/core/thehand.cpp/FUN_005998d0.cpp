// Name: core_thehand.cpp_FUN_005998d0
// Address: 005998d0
// Address Range: [[005998d0, 0059990f]]
// Convention: unknown
// Signature: void core_thehand_cpp_FUN_005998d0(CEnemy *param_1)

#include "nocturne.h"

void core_thehand_cpp_FUN_005998d0(CEnemy *param_1)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  model_ptr = &param_1->field_0x158;
  core_actor_cpp_FUN_0040b7f0((CDeformableModelInstance *)model_ptr,"0@modelName" + 2);
  core_actor_cpp_FUN_0040b870((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_FUN_0040b960((CDeformableModelInstance *)model_ptr,"partStatus");
  return;
}
