// Name: core_anvil.cpp_CAnvil_setup_FUN_0040eac0
// Address: 0040eac0
// Address Range: [[0040eac0, 0040eadf]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040eac0(CAnvil *this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040eac0(CAnvil *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  return;
}
