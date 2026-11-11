// Name: core_spirbear.cpp_CSpiritBear_archive_FUN_0059b4a0
// Address: 0059b4a0
// Address Range: [[0059b4a0, 0059b50f]]
// Convention: __cdecl
// Signature: void __cdecl core_spirbear_cpp_CSpiritBear_archive_FUN_0059b4a0(CSpiritBear *this_ptr)

#include "nocturne.h"

void __cdecl core_spirbear_cpp_CSpiritBear_archive_FUN_0059b4a0(CSpiritBear *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_CNPC_archive_FUN_00509800(&this_ptr->base);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"?modelName" + 1);
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->shoot_me,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->pool_me,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->speed,"speed");
  return;
}
