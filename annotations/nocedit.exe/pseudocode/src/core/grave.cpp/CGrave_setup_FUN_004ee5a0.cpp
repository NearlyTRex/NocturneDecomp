// Name: core_grave.cpp_CGrave_setup_FUN_004ee5a0
// Address: 004ee5a0
// Address Range: [[004ee5a0, 004ee5bb]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_setup_FUN_004ee5a0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_setup_FUN_004ee5a0(CGrave *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  return;
}
