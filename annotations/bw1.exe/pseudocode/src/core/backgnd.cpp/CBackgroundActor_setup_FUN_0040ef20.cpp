// Name: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ef20
// Address: 0040ef20
// Address Range: [[0040ef20, 0040ef5f]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ef20(CBackgroundActor *this_ptr)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ef20(CBackgroundActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  (this_ptr->base).collision_disabled = (uint)(this_ptr->collide_with_me == 0);
  return;
}
