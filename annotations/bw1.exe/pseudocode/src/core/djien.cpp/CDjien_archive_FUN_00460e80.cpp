// Name: core_djien.cpp_CDjien_archive_FUN_00460e80
// Address: 00460e80
// Address Range: [[00460e80, 00460f83]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_archive_FUN_00460e80(CDjien *this_ptr)

#include "nocturne.h"

void __cdecl core_djien_cpp_CDjien_archive_FUN_00460e80(CDjien *this_ptr)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"speed");
  model_ptr = &this_ptr->field_0x158;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870
            ((CMotionController *)model_ptr,"motion state");
  if (g_CDjienClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0xc2d0,"numSacksBlown");
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0xc2d4,"numSacksToBlow");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc2d8,"Sack0Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc2dc,"Sack1Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc2e0,"Sack2Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc2e4,"Sack3Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc2e8,"Sack4Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc2ec,"Sack5Damage");
  core_actor_cpp_archivePartStatus_FUN_0040b960
            ((CDeformableModelInstance *)model_ptr,"partStatus");
  return;
}
