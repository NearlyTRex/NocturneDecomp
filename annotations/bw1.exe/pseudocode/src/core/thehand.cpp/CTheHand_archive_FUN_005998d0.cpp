// Name: core_thehand.cpp_CTheHand_archive_FUN_005998d0
// Address: 005998d0
// Address Range: [[005998d0, 0059990f]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_archive_FUN_005998d0(CTheHand *this_ptr)

#include "nocturne.h"

void __cdecl core_thehand_cpp_CTheHand_archive_FUN_005998d0(CTheHand *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"0@modelName" + 2)
  ;
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040b960(model_ptr,"partStatus");
  return;
}
