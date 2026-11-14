// Name: core_toxhand.cpp_CTheHand_archive_FUN_0056c8c0
// Address: 0056c8c0
// Address Range: [[0056c8c0, 0056c8ff]]
// Convention: __cdecl
// Signature: void __cdecl core_toxhand_cpp_CTheHand_archive_FUN_0056c8c0(CTheHand *this_ptr)

#include "nocturne.h"

void __cdecl core_toxhand_cpp_CTheHand_archive_FUN_0056c8c0(CTheHand *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"0@modelName" + 2)
  ;
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040bba0(model_ptr,"partStatus");
  return;
}
