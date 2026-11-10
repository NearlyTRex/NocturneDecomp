// Name: core_biggs.cpp_CBiggs_archive_FUN_00414f30
// Address: 00414f30
// Address Range: [[00414f30, 00414fb3]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00414f30(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00414f30(CBiggs *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->morphing,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->morph_timer,"morphTimer");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->morph_event,"morphEvent");
  return;
}
