// Name: core_keyactor.cpp_CKeyActor_setup_FUN_005016f0
// Address: 005016f0
// Address Range: [[005016f0, 0050170b]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_005016f0(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_005016f0(CKeyActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  return;
}
