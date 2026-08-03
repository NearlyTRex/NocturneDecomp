// Name: core_batcreat.cpp_CBatCreature_archive_FUN_00412d80
// Address: 00412d80
// Address Range: [[00412d80, 00412dc7]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_00412d80(CBatCreature *this_ptr)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_00412d80(CBatCreature *this_ptr)

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
