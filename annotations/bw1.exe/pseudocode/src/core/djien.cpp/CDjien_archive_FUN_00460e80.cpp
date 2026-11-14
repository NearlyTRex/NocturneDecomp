// Name: core_djien.cpp_CDjien_archive_FUN_00460e80
// Address: 00460e80
// Address Range: [[00460e80, 00460f83]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_archive_FUN_00460e80(CDjien *this_ptr)

#include "nocturne.h"

void __cdecl core_djien_cpp_CDjien_archive_FUN_00460e80(CDjien *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  if (g_CDjienClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->num_sacks_blown,"numSacksBlown");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->num_sacks_to_blow,"numSacksToBlow")
  ;
  core_actor_cpp_archiveFloat_FUN_0040b5f0(this_ptr->sack_damage,"Sack0Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(this_ptr->sack_damage + 1,"Sack1Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(this_ptr->sack_damage + 2,"Sack2Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(this_ptr->sack_damage + 3,"Sack3Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(this_ptr->sack_damage + 4,"Sack4Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(this_ptr->sack_damage + 5,"Sack5Damage");
  core_actor_cpp_archivePartStatus_FUN_0040b960(model_ptr,"partStatus");
  return;
}
