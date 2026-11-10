// Name: core_grave.cpp_CGrave_setup_FUN_004e69c0
// Address: 004e69c0
// Address Range: [[004e69c0, 004e69df]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_setup_FUN_004e69c0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_setup_FUN_004e69c0(CGrave *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  return;
}
