// Name: core_grave.cpp_CGrave_setup_FUN_004b0bd0
// Address: 004b0bd0
// Address Range: [[004b0bd0, 004b0bef]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_setup_FUN_004b0bd0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_setup_FUN_004b0bd0(CGrave *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  return;
}
