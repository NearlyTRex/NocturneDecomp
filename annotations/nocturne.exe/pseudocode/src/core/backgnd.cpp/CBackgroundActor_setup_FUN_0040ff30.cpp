// Name: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30
// Address: 0040ff30
// Address Range: [[0040ff30, 0040ff6f]]
// Convention: __cdecl
// Signature: int __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(CBackgroundActor *this_ptr)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(CBackgroundActor *this_ptr)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  uVar1 = (uint)(this_ptr->collide_with_me == 0);
  (this_ptr->base).collision_disabled = uVar1;
  return uVar1;
}
