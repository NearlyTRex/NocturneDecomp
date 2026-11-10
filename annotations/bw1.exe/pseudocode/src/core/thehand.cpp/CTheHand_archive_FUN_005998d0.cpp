// Name: core_thehand.cpp_CTheHand_archive_FUN_005998d0
// Address: 005998d0
// Address Range: [[005998d0, 0059990f]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_archive_FUN_005998d0(CTheHand *this_ptr)

#include "nocturne.h"

void __cdecl core_thehand_cpp_CTheHand_archive_FUN_005998d0(CTheHand *this_ptr)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  model_ptr = &this_ptr->field_0x158;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)model_ptr,"0@modelName" + 2);
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)model_ptr,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040b960
            ((CDeformableModelInstance *)model_ptr,"partStatus");
  return;
}
