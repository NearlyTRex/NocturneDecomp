// Name: core_anvil.cpp_CAnvil_setup_FUN_0040f5f0
// Address: 0040f5f0
// Address Range: [[0040f5f0, 0040f60f]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040f5f0(CAnvil *this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040f5f0(CAnvil *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  return;
}
