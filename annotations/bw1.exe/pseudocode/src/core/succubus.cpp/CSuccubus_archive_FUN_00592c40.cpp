// Name: core_succubus.cpp_CSuccubus_archive_FUN_00592c40
// Address: 00592c40
// Address Range: [[00592c40, 00592c87]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_00592c40(CSuccubus *this_ptr)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_00592c40(CSuccubus *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  return;
}
