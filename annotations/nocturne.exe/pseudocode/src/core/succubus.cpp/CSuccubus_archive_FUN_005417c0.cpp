// Name: core_succubus.cpp_CSuccubus_archive_FUN_005417c0
// Address: 005417c0
// Address Range: [[005417c0, 00541807]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_005417c0(CSuccubus *this_ptr)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_005417c0(CSuccubus *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  return;
}
