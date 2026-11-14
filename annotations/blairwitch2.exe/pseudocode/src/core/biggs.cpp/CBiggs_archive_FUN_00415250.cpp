// Name: core_biggs.cpp_CBiggs_archive_FUN_00415250
// Address: 00415250
// Address Range: [[00415250, 004152d3]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00415250(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00415250(CBiggs *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&model_ptr->base,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->morphing,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->morph_timer,"morphTimer");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->morph_event,"morphEvent");
  return;
}
