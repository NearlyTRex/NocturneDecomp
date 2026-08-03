// Name: core_biggs.cpp_CBiggs_archive_FUN_00415870
// Address: 00415870
// Address Range: [[00415870, 004158f3]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00415870(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00415870(CBiggs *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->morphing,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->morph_timer,"morphTimer");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->morph_event,"morphEvent");
  return;
}
