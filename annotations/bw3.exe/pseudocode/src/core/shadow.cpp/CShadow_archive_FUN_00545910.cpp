// Name: core_shadow.cpp_CShadow_archive_FUN_00545910
// Address: 00545910
// Address Range: [[00545910, 005459a1]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_archive_FUN_00545910(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_archive_FUN_00545910(CShadow *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  if (g_CShadowClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->light_up_eyes,"lightUpEyes");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->scared_by_light,"scaredByLight");
  return;
}
