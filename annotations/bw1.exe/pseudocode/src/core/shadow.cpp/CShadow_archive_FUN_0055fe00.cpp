// Name: core_shadow.cpp_CShadow_archive_FUN_0055fe00
// Address: 0055fe00
// Address Range: [[0055fe00, 0055fe9b]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_archive_FUN_0055fe00(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_archive_FUN_0055fe00(CShadow *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  if (g_CShadowClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->light_up_eyes,"lightUpEyes");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->scared_by_light,"scaredByLight");
  return;
}
