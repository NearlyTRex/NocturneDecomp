// Name: core_hotdemon.cpp_CHotDemon_archive_FUN_004b96c0
// Address: 004b96c0
// Address Range: [[004b96c0, 004b9710]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004b96c0(CHotDemon *this_ptr)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004b96c0(CHotDemon *this_ptr)

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
