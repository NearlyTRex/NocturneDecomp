// Name: core_thehand.cpp_CTheHand_archive_FUN_0056c8c0
// Address: 0056c8c0
// Address Range: [[0056c8c0, 0056c8ff]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_archive_FUN_0056c8c0(CTheHand *this_ptr)

#include "nocturne.h"

void __cdecl core_thehand_cpp_CTheHand_archive_FUN_0056c8c0(CTheHand *this_ptr)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  model_ptr = &this_ptr->field_0x158;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)model_ptr,"0@modelName" + 2);
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040bba0
            ((CDeformableModelInstance *)model_ptr,"partStatus");
  return;
}
