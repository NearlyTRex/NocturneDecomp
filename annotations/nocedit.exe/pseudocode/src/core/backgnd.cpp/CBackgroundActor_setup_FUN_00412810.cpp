// Name: core_backgnd.cpp_CBackgroundActor_setup_FUN_00412810
// Address: 00412810
// Address Range: [[00412810, 00412824]]
// Convention: __cdecl
// Signature: int core_backgnd.cpp_CBackgroundActor_setup_FUN_00412810(CBackgroundActor * this_ptr)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_00412810(CBackgroundActor *this_ptr)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  uVar1 = (uint)(this_ptr->collide_with_me == 0);
  (this_ptr->base).unk6 = uVar1;
  return uVar1;
}
