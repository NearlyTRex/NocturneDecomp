// Name: core_trash.cpp_CTrash_setup_FUN_005debc0
// Address: 005debc0
// MANUAL RECONSTRUCTION
// Address Range: [[005debc0, 005dec7e]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_setup_FUN_005debc0(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_setup_FUN_005debc0(CTrash *this_ptr)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  (this_ptr->drift).x = 0.0f;
  (this_ptr->drift).y = 0.0f;
  (this_ptr->drift).z = 0.0f;
  (this_ptr->velocity).x = 0.0f;
  (this_ptr->velocity).y = 0.0f;
  (this_ptr->velocity).z = 0.0f;
  this_ptr->collision_bottom_y = 0.5;
  this_ptr->collision_top_y = 2.0;
  this_ptr->damping_factor = 1.0;
  this_ptr->collision_radius = 1.0;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(6.0,20.0);
  this_ptr->animation_timer = fVar1;
  (this_ptr->drift_target).x = 0.0f;
  (this_ptr->drift_target).y = 0.0f;
  (this_ptr->drift_target).z = 0.0f;
  this_ptr->gravity = 8.0;
  return;
}
